#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define fastio() ios::sync_with_stdio(false); cin.tie(NULL);

void solve() {
    int n, x, s;
    cin>>n>>x>>s;
    string str;
    for(int i=0; i<n; i++){
        char ch;
        cin>>ch;
        str += ch;
    }
    vector<vector<int>> dp(n+1, vector<int>(x+1, -1));
    dp[0][0] = 0;
    for(int i=1; i<=n; i++){
        for(int j=0; j<=x; j++){
            if(dp[i-1][j] == -1) continue;
            int seated = dp[i-1][j];
            char ch = str[i-1];
            dp[i][j] = max(dp[i][j], seated);
            if(j < x && (ch == 'I' || ch == 'A')){
                dp[i][j+1] = max(dp[i][j+1], seated+1); 
            }
            if(j*s-seated > 0 && (ch == 'E' || ch == 'A')){
                dp[i][j] = max(dp[i][j], seated+1);
            }
        }
    }
    int ans = 0;
    ans = *max_element(dp[n].begin(), dp[n].end());
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