#include <bits/stdc++.h>
using namespace std;

void solve() {
  // Your problem solving code goes here
  int n;
  cin>>n;
  if(n == 2){
    cout<<2<<endl;
    return;
  }
  if(n == 3){
    cout<<3<<endl;
    return;
  }
  if(n%2 == 0){
    cout<<0<<endl;
  } else{
    cout<<1<<endl;
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