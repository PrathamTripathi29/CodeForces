#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define fastio() ios::sync_with_stdio(false); cin.tie(NULL);

void solve() {
    vector<int> arr;
    for(int i=0; i<7; i++){
        int num;
        cin>>num;
        arr.push_back(num);
    }
    sort(arr.begin(), arr.end());
    int ans = 0;
    for(int i=0; i<6; i++){
        ans += (-arr[i]);
    }
    ans += arr[6];
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