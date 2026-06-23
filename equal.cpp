#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define fastio() ios::sync_with_stdio(false); cin.tie(NULL);

void solve() {
    int n;
    cin>>n;
    vector<int> arr(n);
    map<int, int> freq;
    map<int, int> Cost;
    for(int i=0; i<n; i++){
        cin>>arr[i];
        int num = arr[i];
        int cost = 0;
        freq[num]++;
        Cost[num] += cost;
        if(num == 1){
            freq[2]++;
            Cost[2] += 1;
            continue;
        }
        while(num != 1){
            if(num&1){
                num++;
                cost++;
            } else {
                num /= 2;
                cost++;
            }
            freq[num]++;
            Cost[num] += cost;
        }
    }
    int minCost = INT_MAX;
    for(auto it : freq){
        if(it.second == n){
            minCost = min(minCost, Cost[it.first]);
        }
    }
    cout<<minCost<<"\n";
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