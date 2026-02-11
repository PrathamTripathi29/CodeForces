#include <bits/stdc++.h>
using namespace std;

void solve() {
  // Your problem solving code goes here
  int x, n;
  cin>>x;
  cin>>n;
  if(n%2 == 0){
    cout<<0<<endl;
  } else{
    cout<<x<<endl;
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