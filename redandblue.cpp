#include <bits/stdc++.h>
using namespace std;

int maxcalc(int n, int m, vector<int> &red, vector<int> &blue)
{
    int maxred = 0;
    int maxblue = 0;
    int currsum = 0;
    for (int i = 0; i < n; i++)
    {
        currsum += red[i];
        maxred = max(maxred, currsum);
    }
    currsum = 0;
    for (int i = 0; i < m; i++)
    {
        currsum += blue[i];
        maxblue = max(maxblue, currsum);
    }
    return maxred + maxblue;
}

int main()
{
    int t, n, m;
    cin >> t;
    while (t != 0)
    {
        cin >> n;
        vector<int> red(n);
        for (int i = 0; i < n; i++)
        {
            cin >> red[i];
        }
        cin >> m;
        vector<int> blue(m);
        for (int i = 0; i < m; i++)
        {
            cin >> blue[i];
        }
        cout << maxcalc(n, m, red, blue) << endl;
        t--;
    }
    return 0;
}