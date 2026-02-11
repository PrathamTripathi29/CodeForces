#include <bits/stdc++.h>
using namespace std;

void solve()
{
    // Your problem solving code goes here
    int arr[4];
    for (int i = 0; i < 4; i++)
    {
        cin >> arr[i];
    }
    for (int i = 1; i < 4; i++)
    {
        if (arr[i] != arr[i - 1])
        {
            cout << "NO" << endl;
            return;
        }
    }
    cout << "YES" << endl;
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