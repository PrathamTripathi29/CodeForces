#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define fastio() ios::sync_with_stdio(false); cin.tie(NULL);

void solve() {
    int n;
    cin>>n;
    vector<int> arr(n);
    int maxVal = INT_MIN;
    int maxFreq = 0;
    unordered_map<int, int> mp;
    for(int i=0; i<n; i++){
        cin>>arr[i];
        maxVal = max(maxVal, arr[i]);
        mp[arr[i]]++;
    }
    maxFreq = mp[maxVal];
    cout<<maxFreq<<endl;
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