#include <bits/stdc++.h>
using namespace std;

void solve() {
  // Your problem solving code goes here
  int n, m, k;
  cin>>n>>m>>k;
  vector<int> robos(n);
  vector<int> spikes(m);
  for(auto& x : robos) cin>>x;
  for(auto& x : spikes) cin>>x;
  string ins;
  cin>>ins;
  int lr=0, rr=0;
  int curr = 0;
  for(int i=0; i<k; i++){
    if(ins[i] == 'L'){
        curr--;
        if(-curr > lr){
            lr = curr;
        }
    } else {
        curr++;
        if(curr > rr){
            rr = curr;
        }
    }
  }
  vector<pair<int, int>> ranges(n);
  for(int i=0; i<n; i++){
    ranges[i].first = robos[i] - lr;
    ranges[i].second = robos[i] + rr;
  }
  
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