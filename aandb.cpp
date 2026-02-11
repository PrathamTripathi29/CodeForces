#include <bits/stdc++.h>
using namespace std;

void solve() {
  // Your problem solving code goes here
  int n;
  cin>>n;
  string s;
  cin>>s;
  vector<int> apos;
  vector<int> bpos;
  int count = 0;
  for(int i=0; i<n; i++){
    if(s[i] == 'a'){
        apos.push_back(i-count);
        count++;
    }
  }
  count = 0;
  for(int i=0; i<n; i++){
    if(s[i] == 'b'){
        bpos.push_back(i-count);
        count++;
    }
  }
  if(apos.size() < 2 || bpos.size() < 2){
    cout<<0<<endl;
    return;
  }
  int mediana, medianb;
  mediana = apos[apos.size()/2];
  medianb = bpos[bpos.size()/2];
  long long swapsa, swapsb;
  swapsa = swapsb = 0;
  for(int i=0; i<apos.size(); i++){
    swapsa += abs(apos[i] - mediana);
  }
  for(int i=0; i<bpos.size(); i++){
    swapsb += abs(bpos[i] - medianb);
  }
  long long ans = min(swapsa, swapsb);
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