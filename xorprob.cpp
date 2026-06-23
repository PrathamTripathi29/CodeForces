#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define fastio() ios::sync_with_stdio(false); cin.tie(NULL);

void solve() {
    int n;
    cin>>n;
    vector<int> arr;
    for(int i=0; i<n; i++){
        int num;
        cin>>num;
        arr.push_back(num);
    }
    int ans = INT_MIN;
    for(int i=0; i<n-1; i++){
        for(int j=i+1; j<n; j++){
            int XOR = arr[i]^arr[j];
            ans = max(XOR, ans);
        }
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