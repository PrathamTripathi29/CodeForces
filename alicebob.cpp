#include <bits/stdc++.h>
using namespace std;

void solve() {
  // Your problem solving code goes here
  int n;
  cin>>n;
  int arr[n];
  int count1, count0;
  count0 = count1 = 0;
  for(int i=0; i<n; i++){
    cin>>arr[i];
    if(arr[i] == 0) count0++;
    else count1++;
  }
  if(count1 >= count0){
    cout<<"Alice"<<endl;
    return;
  }
  cout<<"Bob"<<endl;
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