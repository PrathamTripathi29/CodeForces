#include <bits/stdc++.h>
using namespace std;

void solve() {
  // Your problem solving code goes here
  long long n;
  cin>>n;
  long long cost = 0;
  while(n > 0){
    long long curr;
    long long power = -1;
    for(curr = 1; curr<=n; curr *= 3){
        power++;
    }
    cost += (long long)pow(3, power+1) + power*(long long)pow(3, power-1);
    n -= (long long)pow(3, power);
  }
  cout<<cost<<endl;
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