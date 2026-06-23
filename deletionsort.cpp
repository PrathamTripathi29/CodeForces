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
    bool flag = true;
    int prev = INT_MIN;
    for(int num : arr){
        if(num < prev){
            flag = false;
            break;
        }
        prev = num;
    }
    if(flag == false){
        cout<<1<<endl;
    } else {
        cout<<n<<endl;
    }
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