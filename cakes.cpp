#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define fastio() ios::sync_with_stdio(false); cin.tie(NULL);

void solve() {
    int n;
    cin>>n;
    int ans = 1;
    int factor = 2;
    while(factor*factor <= n){
        if(n%factor == 0){
            ans = ans*factor;
            while(n%factor == 0){
                n /= factor;
            }
        }
        factor++;
    }
    if(n > 1){
        ans = ans*n;
    }
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