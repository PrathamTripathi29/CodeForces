#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define fastio() ios::sync_with_stdio(false); cin.tie(NULL);

void solve() {
    int n, k;
    cin>>n>>k;
    string s;
    cin>>s;
    vector<int> count(k, 0);
    for(int i=0; i<n; i++){
        if(s[i] == '1'){
            count[i%k]++;
        }
    }
    for(int i=0; i<k; i++){
        if(count[i]&1){
            cout<<"No"<<endl;
            return;
        }
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