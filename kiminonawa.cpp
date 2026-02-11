#include <bits/stdc++.h>
using namespace std;

void solve()
{
    // Your problem solving code goes here
    int n;
    string s, t;
    cin >> n;
    cin >> s >> t;
    unordered_map<char, int> smap;
    unordered_map<char, int> tmap;
    for (int i = 0; i < n; i++)
    {
        smap[s[i]]++;
        tmap[t[i]]++;
    }
    for (auto &it : smap)
    {
        if (tmap[it.first] != smap[it.first])
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