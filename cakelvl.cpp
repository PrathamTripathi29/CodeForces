#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define fastio() ios::sync_with_stdio(false); cin.tie(NULL);

void solve() {
    int n;
    cin>>n;
    vector<long long> arr(n);

    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    long long total = arr[0];
    vector<long long> ans(n);
    ans[0] = total;
    for(int i=1; i<n; i++){
        total += arr[i];
        long long h = total/(i+1);
        ans[i] = min(h, ans[i-1]);
    }
    for(int i=0; i<n; i++){
        cout<<ans[i]<<" ";
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