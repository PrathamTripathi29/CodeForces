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
  int ops = 0;
  for(int i=0; i<n-1; i++){
    int a1 = arr[i];
    int a2 = arr[i+1];
    if(a1 == a2 || a1 == 7 - a2){
        ops++;
        i++;
    }
  }
  cout<<ops<<endl;
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