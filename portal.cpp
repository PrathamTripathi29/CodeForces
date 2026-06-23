#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define fastio() ios::sync_with_stdio(false); cin.tie(NULL);

void solve() {
    int n, x, y;
    cin>>n>>x>>y;
    vector<int> arr(n);
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    x--;
    y--;

    int minl, minm, minr;
    minl = minm = minr = INT_MAX;
    for(int i=0; i<=x; i++){
        minl = min(minl, arr[i]);
    }
    for(int i=x+1; i<=y; i++){
        minm = min(minm, arr[i]);
    }
    for(int i=y+1; i<n; i++){
        minr = min(minr, arr[i]);
    }
    
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