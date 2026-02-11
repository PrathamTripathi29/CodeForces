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
  if(arr[0] == -1 && arr[n-1] == -1){
    cout<<0<<endl;
    arr[0] = arr[n-1] = 0;
    }
  else if(arr[0] == -1){
    cout<<0<<endl;
    arr[0] = arr[n-1];
  }
  else if(arr[n-1] == -1){
    cout<<0<<endl;
    arr[n-1] = arr[0];
  }
  else {
    cout<<abs(arr[n-1]-arr[0])<<endl;
  }
  for(int i=0; i<n; i++){
    if(arr[i] == -1){
        arr[i] = 0;
    }
    cout<<arr[i]<<" ";
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