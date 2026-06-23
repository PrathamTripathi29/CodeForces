#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define fastio() ios::sync_with_stdio(false); cin.tie(NULL);

void solve() {
    int n;
    cin>>n;
    vector<int> arr(n);
    int maxIdx = 0;
    for(int i=0; i<n; i++){
        cin>>arr[i];
        if(arr[i] > arr[maxIdx]){
            maxIdx = i;
        }
    }
    int temp;
    temp = arr[maxIdx];
    arr[maxIdx] = arr[0];
    arr[0] = temp;
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
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