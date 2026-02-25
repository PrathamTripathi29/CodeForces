#include <bits/stdc++.h>
using namespace std;

void solve() {
  // Your problem solving code goes here
  int n;
  cin>>n;
  string s;
  cin>>s;
  int score = 1;
  for(int i=0; i<n-1; i++){
    if(s[i] != s[i+1]) score++;
  }
  if(score == n){
    cout<<score<<endl;
    return;
  }
  if(s[0] == s[n-1]){
    cout<<(score)<<endl;
  } else {
    cout<<(score+1)<<endl;
  }
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