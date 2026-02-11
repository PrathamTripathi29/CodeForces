#include <bits/stdc++.h>
using namespace std;

void solve() {
  // Your problem solving code goes here
  int k, x;
  cin>>k>>x;
  int ans = k*x + 1;
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