#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define fastio() ios::sync_with_stdio(false); cin.tie(NULL);

void solve() {
    int n;
    cin>>n;
    int sum = 0;
    for(int i=0; i<n; i++){
        int x;
        cin>>x;
        sum += x;
        if(x == 1){
            sum--;
        }
        if(i == n-1 && x == 1){
            sum++;
        }
    }
    cout<<sum<<endl;
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