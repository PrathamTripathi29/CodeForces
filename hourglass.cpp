#include <bits/stdc++.h>
using namespace std;

void solve() {
  // Your problem solving code goes here
  int s,k,m;
  cin>>s>>k>>m;
  int flips = m/k;
  if(flips%2 == 0){
    int rem = m%k;
    int ans = max(0, s - rem);
    cout<<ans<<endl;
  } else{
    int rem = m%k;
    int ans = min(s, k) - rem;
    int fin = max(0, ans);
    cout<<fin<<endl;
  }
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