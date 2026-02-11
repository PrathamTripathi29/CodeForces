#include <bits/stdc++.h>
using namespace std;

void solve()
{
    // Your problem solving code goes here
    int n;
    cin >> n;
    int arrA[n];
    int arrB[n];
    int Ax = 0;
    int Bx = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> arrA[i];
        Ax = Ax ^ arrA[i];
    }
    for (int i = 0; i < n; i++)
    {
        cin >> arrB[i];
        Bx = Bx ^ arrB[i];
    }
    if (Ax == Bx)
    {
        cout << "Tie" << endl;
        return;
    }
    int ABx = Ax ^ Bx;
    int H = 0;
    int check = ABx;
    int index = 0;
    while (check > 0)
    {
        if (check & 1)
        {
            H = index;
        }
        index++;
        check = check >> 1;
    }
    int last = -1;
    for (int i = n - 1; i >= 0; i--)
    {
        int x = arrA[i] ^ arrB[i];
        int b = 1 << H;
        if (x & b)
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
        ;
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