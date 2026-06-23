#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define fastio() ios::sync_with_stdio(false); cin.tie(NULL);

void solve() {
    int x, y;
    cin>>x>>y;
    if(x&1 && y&1){
        cout<<"No"<<endl;
        return;
    }
    cout<<"Yes"<<endl;
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