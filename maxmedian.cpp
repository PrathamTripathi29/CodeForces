#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define fastio() ios::sync_with_stdio(false); cin.tie(NULL);

void solve() {
    int n;
    cin>>n;
    int seg = n;
    n = 3*n;
    vector<int> arr(n);
    arr[0] = 1;
    arr[1] = 1+seg;
    arr[2] = arr[1] + 1;
    int idx = 3;
    for(int s=0; s<seg-1; s++){
        arr[idx] = arr[idx-3] + 1;
        idx += 3;
    }
     idx = 4;
    for(int s=0; s<seg-1; s++){
        arr[idx] = arr[idx-3] + 2;
        idx += 3;
    }
     idx = 5;
    for(int s=0; s<seg-1; s++){
        arr[idx] = arr[idx-3] + 2;
        idx += 3;
    }
    for(int a : arr){
        cout<<a<<" ";
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