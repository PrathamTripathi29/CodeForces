#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define fastio() ios::sync_with_stdio(false); cin.tie(NULL);

void solve() {
    int n, x1, x2, k;
    cin>>n>>x1>>x2>>k;
    int ans = 0;
    if(n <= 3){
        cout<<1<<endl;
        return;
    }
    int dist = abs(x1-x2);
    dist = min(dist, n-dist);
    ans = dist + k;
    cout<<ans<<endl;
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