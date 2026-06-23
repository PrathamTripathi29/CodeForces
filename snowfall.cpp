#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define fastio() ios::sync_with_stdio(false); cin.tie(NULL);

void solve() {
    int n;
    cin>>n;
    vector<int> odd3;
    vector<int> even6;
    vector<int> evennot6;
    vector<int> oddnot3;
    for(int i=0; i<n; i++){
        int x;
        cin>>x;
        if(x%2 == 0 && x%3 == 0) even6.push_back(x);
        else if(x%2 == 0) evennot6.push_back(x);
        else if(x%3 == 0) odd3.push_back(x);
        else oddnot3.push_back(x);
    }
    for(int i=0; i<even6.size(); i++){
        cout<<even6[i]<<" ";
    }
    for(int i=0; i<evennot6.size(); i++){
        cout<<evennot6[i]<<" ";
    }
    for(int i=0; i<oddnot3.size(); i++){
        cout<<oddnot3[i]<<" ";
    }
    for(int i=0; i<odd3.size(); i++){
        cout<<odd3[i]<<" ";
    }
    cout<<endl;
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