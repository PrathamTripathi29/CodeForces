#include <bits/stdc++.h>
using namespace std;


int pile(int n, int k, vector<int> &dp){
    if(n == 0) return -1;
    int p1 = n/2;
    int p2 = (n+1)/2;
    if(p1 == k || p2 == k ){
        return 1;
    }
    int t1 = dp[p1] == -1 ? pile(p1, k, dp) : dp[p1];
    int t2 = dp[p2] == -1 ? pile(p2, k, dp) : dp[p2];

    if(t1 == -1 && t2 == -1){
        return dp[n] = -1;
    }
    if(t1 == -1){
        return dp[n] = 1 + t2;
    }
    if(t2 == -1){
        return dp[n] = 1 + t1;
    }
    
    return dp[n] = 1 + min(t1, t2);
}
void solve() {
  // Your problem solving code goes here
  int n, k;
    cin>>n>>k;
    int t = 0;
    vector<int> dp(n+1, -1);
    int ans = pile(n, k, dp);
    cout<<ans<<endl;
    return;
}

int main() {
  // Optional: Speeds up I/O operations
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int t = 1;
  cin >> t;
  while (t--) {
    solve();
  }
  return 0;
}