#include <bits/stdc++.h>
using namespace std;

void solve()
{
    // Your problem solving code goes here
    int n, m;
    cin >> n >> m;
    int a[n];
    int b[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
        cin >> b[i];
    }
    int currside = 0;
    int currtime = 0;
    int points = 0;
    for (int i = 0; i < n; i++)
    {
        if ((a[i] - currtime) % 2 == 0)
        {
            if (currside == b[i])
            {
                points += (a[i] - currtime);
            }
            else
            {
                points += (a[i] - currtime - 1);
            }
            currside = b[i];
            currtime = a[i];
        }
        else
        {
            if (currside == b[i])
            {
                points += (a[i] - currtime - 1);
            }
            else
            {
                points += (a[i] - currtime);
            }
            currside = b[i];
            currtime = a[i];
        }
    }
    if (a[n - 1] < m)
    {
        points += (m - a[n - 1]);
    }
    cout << points << endl;
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