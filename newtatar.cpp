#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define fastio() ios::sync_with_stdio(false); cin.tie(NULL);

void solve() {
    int n, k;
    cin>>n>>k;
    vector<int> arr(n);
    map<int, int, greater<int>> mp;
    for(int i=0; i<n; i++){
        int num;
        cin>>num;
        mp[num]++;
    }
    int prev = INT_MAX;
    int freq = 0;
    for(auto& it : mp){
        int num = it.first;
        freq = it.second;
        if(prev == INT_MAX){
            if(freq%2 == 0){
                cout<<"Yes"<<endl;
                return;
            }
        } else {
            if(prev - num <= k){
                cout<<"Yes"<<endl;
                return;
            } else {
                if(freq%2 == 0){
                    cout<<"Yes"<<endl;
                    return;
                }
            }
        }
        prev = num;
    }
    cout<<"No"<<endl;
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