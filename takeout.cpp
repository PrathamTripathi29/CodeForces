#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define fastio() ios::sync_with_stdio(false); cin.tie(NULL);

void solve() {
    int n;
    int count1, count2, count0;
    count1 = count2 = count0 = 0;
    cin>>n;
    for(int i=0; i<n; i++){
        int x;
        cin>>x;
        if(x == 0) count0++;
        else if(x==1) count1++;
        else if(x==2) count2++;
    }
    int ops = 0;
    ops += count0;
    int common = min(count1, count2);
    ops += common;
    count1 = max(0, count1-common);
    count2 = max(0, count2-common);
    ops += (count1/3 + count2/3);
    cout<<ops<<endl;
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