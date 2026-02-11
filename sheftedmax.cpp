#include <bits/stdc++.h>
using namespace std;

void solve() {
  // Your problem solving code goes here
  int n;
  cin>>n;
  vector<int> arr(n);
  for(int i=0; i<n; i++){
    cin>>arr[i];
  }
  if(n == 1){
    cout<<1<<endl;
    return;
  }
  sort(arr.begin(), arr.end());
  int l = 1;
  int maxLen = 1;
  for(int i=1; i<n; i++){
    if(arr[i] - arr[i-1] == 0){
        continue;
    }
    if(arr[i] - arr[i-1] > 1){
        l=1;
    } else {
        l++;
    }
    maxLen = max(maxLen, l);
  }
  cout<<maxLen<<endl;
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