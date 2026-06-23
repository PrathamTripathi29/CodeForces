#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define fastio() ios::sync_with_stdio(false); cin.tie(NULL);

void solve() {
    int n;
    cin>>n;
    int countop = 0;
    int countcl = 0;
    for(int i=0; i<n; i++){
        char c;
        cin>>c;
        if(c == ')') countcl++;
        else countop++;
    }
    if(countop == countcl) cout<<"Yes"<<endl;
    else cout<<"No"<<endl;
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