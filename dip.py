import numpy as np
import matplotlib.pyplot as plt
import random

img = np.array([
    [0, 0, 0, 75, 75, 75, 128, 128, 128, 128],
    [0, 75, 75, 128, 128, 128, 255, 255, 255, 255],
    [75, 75, 75, 200, 200, 200, 255, 255, 255, 200],
    [128, 128, 128, 200, 200, 255, 255, 200, 200, 200],
    [128, 128, 128, 255, 255, 200, 200, 75, 75, 75],
    [175, 175, 175, 225, 225, 225, 75, 75, 75, 100],
    [175, 175, 100, 100, 100, 225, 225, 75, 75, 100],
    [75, 75, 75, 35, 35, 35, 0, 0, 0, 35],
    [35, 35, 35, 0, 0, 0, 35, 35, 35, 75],
    [75, 75, 75, 100, 100, 100, 200, 200, 200, 200]
])

def downsample(image, new_size):
    h, w = image.shape
    step_h = h / new_size
    step_w = w / new_size
    result = np.zeros((new_size, new_size))
    for i in range(new_size):
        for j in range(new_size):
            result[i, j] = image[int(i * step_h), int(j * step_w)]
    return result

def block_process(image, block_size, method="mean"):
    h, w = image.shape
    new_h = h // block_size
    new_w = w // block_size
    result = np.zeros((new_h, new_w))
    for i in range(new_h):
        for j in range(new_w):
            block = image[i*block_size:(i+1)*block_size,
                          j*block_size:(j+1)*block_size]
            if method == "mean":
                result[i, j] = np.mean(block)
            elif method == "variance":
                result[i, j] = np.var(block)
            elif method == "std":
                result[i, j] = np.std(block)
            elif method == "cv":
                mean = np.mean(block)
                std = np.std(block)
                result[i, j] = std / mean if mean != 0 else 0
            elif method == "stochastic":
                result[i, j] = random.choice(block.flatten())
    return result

def resize_to(image, new_size, method):
    factor = image.shape[0] // new_size
    if method == "downsample":
        return downsample(image, new_size)
    elif method == "decimation":
        return block_process(image, factor, "mean")
    elif method == "variance":
        return block_process(image, factor, "variance")
    elif method == "std":
        return block_process(image, factor, "std")
    elif method == "cv":
        return block_process(image, factor, "cv")
    elif method == "stochastic":
        return block_process(image, factor, "stochastic")

sizes = [5, 4, 3, 2]
methods = ["downsample", "decimation", "variance", "std", "cv", "stochastic"]

fig = plt.figure(figsize=(18, 12), constrained_layout=True)

rows = len(sizes)
cols = len(methods) + 1
plot_index = 1

for size in sizes:
    ax = plt.subplot(rows, cols, plot_index)
    ax.text(0.5, 0.5, f"{size}×{size}", fontsize=14,
            ha='center', va='center')
    ax.axis('off')
    plot_index += 1

    for method in methods:
        resized = resize_to(img, size, method)
        ax = plt.subplot(rows, cols, plot_index)
        ax.imshow(resized, cmap='gray')
        ax.set_title(method, fontsize=11)
        ax.axis('off')
        plot_index += 1

plt.savefig("assignment_output.png", dpi=300, bbox_inches="tight")
plt.show()
