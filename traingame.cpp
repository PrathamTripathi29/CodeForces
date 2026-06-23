#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define fastio() ios::sync_with_stdio(false); cin.tie(NULL);

void solve() {
    int n;
    cin>>n;
    int mn = INT_MAX;
    int mx = INT_MIN;
    for(int i=0; i<n; i++){
        int h;
        cin>>h;
        mx = max(mx, h);
        mn = min(mn, h);
    }
    cout<<(mx-mn+1)<<endl;
    return;
}

int main() {
    fastio();

    int t;
    cin >> t;
    while(t--) {
        solve();
    }

    return 0;
}