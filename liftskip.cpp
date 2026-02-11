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
  int diff = INT_MIN;
  int sum = 0;
  for(int i=0; i<n; i++){
    if(i+1 <n){
        sum += abs(arr[i] - arr[i + 1]);
    }
    int currdiff = 0;
    if(i+1 < n){
        currdiff = abs(arr[i] - arr[i + 1]);
    }
    if((i-1) >= 0){
        currdiff += abs(arr[i-1] - arr[i]);
    }
    if((i-1) >= 0 && (i+1) < n){
        currdiff -= abs(arr[i-1] - arr[i+1]);
    }
    diff = max(diff, currdiff);
  }
  int newsum = sum - diff;
  cout<<newsum<<endl;
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