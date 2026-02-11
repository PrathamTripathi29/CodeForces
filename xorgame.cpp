#include <bits/stdc++.h>
using namespace std;

void solve()
{
    // Your problem solving code goes here
    int n;
    cin >> n;
    int arrA[n];
    int arrB[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arrA[i];
    }
    for (int i = 0; i < n; i++)
    {
        cin >> arrB[i];
    }
    int xorA = 0;
    int xorB = 0;
    for (int i = 0; i < n; i++)
    {
        xorA = xorA ^ arrA[i];
        xorB = xorB ^ arrB[i];
    }
    if (xorA == xorB)
    {
        cout << "Tie" << endl;
        return;
    }
    int last = -1;
    for (int i = n - 1; i >= 0; i--)
    {
        if (arrA[i] != arrB[i])
        {
            last = i;
            break;
        }
    }
    if (last % 2 == 0)
    {
        cout << "Ajisai" << endl;
    }
    else
    {
        cout << "Mai" << endl;
    }
    return;
}

int main()
{
    // Optional: Speeds up I/O operations
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t = 1;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}