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
  for(int i=1; i<=n; i++){
    int pos = i;
    int val = arr[i-1];
    while(pos % 2 == 0){
        pos = pos/2;
    }
    while(val %2 == 0){
        val = val/2;
    }
    if(val != pos){
        cout<<"NO"<<endl;
        return;
    }
  }
  cout<<"YES"<<endl;
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