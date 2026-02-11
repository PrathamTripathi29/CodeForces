#include <bits/stdc++.h>
using namespace std;

void solve() {
  // Your problem solving code goes here
  int n;
  cin>>n;
  vector<int> arr(n);
  int countZero = 0;
  int countNeg = 0;
  for(int i=0; i<n; i++){
    cin>>arr[i];
    if(arr[i] == 0){
        countZero++;
    } else if(arr[i] == -1){
        countNeg++;
    }
  }
  int ans = countZero;
  if(countNeg%2 != 0){
    ans += 2;
  }
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