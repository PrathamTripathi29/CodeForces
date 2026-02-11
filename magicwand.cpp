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
  int odd = 0;
  int even = 0;
  for(int i=0; i<n; i++){
    if(arr[i]%2 == 0){
        even++;
    } else{
        odd++;
    }
  }
  if(odd > 0 && even > 0){
    sort(arr.begin(), arr.end());
  }
  for(int i=0; i<arr.size(); i++){
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