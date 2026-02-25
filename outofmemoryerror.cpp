#include <bits/stdc++.h>
using namespace std;

void solve() {
  // Your problem solving code goes here
  int n, m;
  long long h;
  cin>>n>>m>>h;
  vector<long long> arr(n);
  for(int i=0; i<n; i++){
    cin>>arr[i];
  }
  vector<long long> newArr(n);
  newArr = arr;
  int last_reset = -1;
  vector<int> last_updated(n, -1);
  for(int i=0; i<m; i++){
    int a, b;
    cin>>a>>b;
    a--;
    if(last_updated[a] < last_reset) newArr[a] = arr[a];
    newArr[a] += b;
    if(newArr[a] > h){
      last_reset = i;
      newArr[a] = arr[a];
    }
    last_updated[a] = i;
  }

  for(int i=0; i<n; i++){
    if(last_updated[i] < last_reset){
      newArr[i] = arr[i];
    }
    cout << newArr[i] << " ";
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