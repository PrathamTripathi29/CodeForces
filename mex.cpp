#include <bits/stdc++.h>
using namespace std;

void solve() {
  // Your problem solving code goes here
  int n, k;
  cin>>n>>k;
  vector<int> arr(n);
  map<int, int> mp;
  for(int i=0; i<n; i++){
    cin>>arr[i];
    mp[arr[i]]++;
  }
  int ans = 0;
  int zerofreq = 0;
  for(int i=0; i<k; i++){
    if(mp.count(i) == 0){
        zerofreq++;
    }
  }
  ans = max(zerofreq, mp[k]);
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