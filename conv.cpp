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
    sort(arr.begin(), arr.end());
    int med = arr[n/2];
    int i=0;
    int j=n-1;
    int calls = 0;
    while(i <= j){
        if(arr[i] != med || arr[j] != med){
            calls++;
        }
        i++;
        j--;
    }
    cout<<calls<<endl;
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