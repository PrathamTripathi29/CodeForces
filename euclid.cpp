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
    sort(arr.rbegin(), arr.rend());
    if(n == 2){
        cout<<arr[0]<<" "<<arr[1]<<endl;
        return;
    }
    for(int i=2; i<n; i++){
        if(arr[i-2]%arr[i-1] != arr[i]){
            cout<<-1<<endl;
            return;
        }
    }
    cout<<arr[0]<<" "<<arr[1]<<endl;
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