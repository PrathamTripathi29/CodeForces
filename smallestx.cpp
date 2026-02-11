#include <bits/stdc++.h>
using namespace std;

long long gcd(long long a, long long b)
{
    while (b)
    {
        a %= b;
        swap(a, b);
    }
    return a;
}

bool isPrime(long long x)
{
    if (x <= 1)
        return false;
    if (x <= 3)
        return true;
    if (x % 2 == 0 || x % 3 == 0)
    {
        return false;
    }
    for (long long i = 5; i * i <= x; i += 6)
    {
        if (x % i == 0 || x % (i + 2) == 0)
        {
            return false;
        }
    }
    return true;
}

void solve() {
  // Your problem solving code goes here
  int n;
  cin>>n;
  long long arr[n];
  for(int i=0; i<n; i++){
    cin>>arr[i];
  }
  long long g = arr[0];
  for(int i=1; i<n; i++){
    g = gcd(g, arr[i]);
  }
  long long p = 2;
  if(g == 1){
    cout<<p<<endl;
    return;
  }
  while(g%p == 0){
    p++;
    while(!isPrime(p)){
        p++;
    }
    if(p > 1e18){
        break;
    }
}
    if(p > 1e18){
        cout<<-1<<endl;
        return;
    }
    cout<<p<<endl;
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