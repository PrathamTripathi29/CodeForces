#include <bits/stdc++.h>
using namespace std;

void solve()
{
    // Your problem solving code goes here
    int n;
    cin >> n;
    long long a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    long long ans = 0;
    vector<long long> odddand;
    for (int i = 0; i < n; i++)
    {
        if (a[i] % 2 != 0)
        {
            odddand.push_back(a[i]);
        }
        else
        {
            ans += a[i];
        }
    }
    if (odddand.size() == 0)
    {
        cout << 0 << endl;
        return;
    }
    int o = (odddand.size() + 1) / 2;
    sort(odddand.rbegin(), odddand.rend());
    for (int i = 0; i < o; i++)
    {
        ans += odddand[i];
    }
    cout << ans << endl;
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