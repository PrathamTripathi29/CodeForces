#include <bits/stdc++.h>
using namespace std;

void solve() {
  // Your problem solving code goes here
  int n;
  cin>>n;
  vector<long long> arr(n);
  long long minnum = LLONG_MAX;
  long long secmin = LLONG_MAX;
  for(int i=0; i<n; i++){
    cin>>arr[i];
    if(arr[i] < minnum){
        secmin = minnum;
        minnum = arr[i];
        
    } else if(arr[i] > minnum && arr[i] < secmin){
        secmin  = arr[i];   
    }
}
long long midnum;
    if(secmin != LLONG_MAX) midnum = secmin - minnum;
    long long k = max(minnum, midnum);
    cout<<k<<endl;
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