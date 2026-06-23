#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define fastio() ios::sync_with_stdio(false); cin.tie(NULL);

void solve() {
    int n;
    cin>>n;
    vector<int> arr(n);
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    int k = 0;
    for(int i=1; i<n; i++){
        if(arr[i] < arr[i-1]){
            k = max(k, arr[i-1] - arr[i]);
        }
    }
    for(int i=1; i<n; i++){
        if(arr[i] < arr[i-1]){
            arr[i] += k;
        }
        if(arr[i] < arr[i-1]){
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