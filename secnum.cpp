#include <bits/stdc++.h>
using namespace std;

void solve() {
  // Your problem solving code goes here
  long long n;
  cin>>n;
  long long div = 11;
  vector<long long> ans;
  while(n/div > 0){
    if(n%div == 0){
        ans.push_back(n/div);
    }
    div--;
    div *= 10;
    div++;
  }
  sort(ans.begin(), ans.end());
  cout<<ans.size()<<endl;
  for(long long i=0; i<ans.size(); i++){
    cout<<ans[i]<<" ";
  }
  cout<<endl;
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