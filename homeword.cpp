#include <bits/stdc++.h>
using namespace std;

void solve() {
  // Your problem solving code goes here
  int n, m;
  cin>>n;
  string a, b, c;
  cin>>a;
  cin>>m;
  cin>>b;
  cin>>c;
  for(int i=0; i<c.length(); i++){
    if(i < m && c[i] == 'V'){
        a = b[i] + a;
    } else {
        a = a + b[i];
    }
  }
  cout<<a<<endl;
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