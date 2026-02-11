#include <bits/stdc++.h>
using namespace std;

void solve() {
  // Your problem solving code goes here
  int n;
  cin>>n;
  int maxVal = INT_MIN;
  for(int i=0; i<n; i++){
    int currVal;
    cin>>currVal;
    maxVal = max(currVal, maxVal);
  }
  cout<<maxVal*n<<endl;
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