#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define fastio() ios::sync_with_stdio(false); cin.tie(NULL);

bool isPrime(int n){
    if(n == 2) return true;
    if(n%2 == 0) return false;
    for(int i=3; i*i<=n; i += 2){
        if(n%i == 0) return false;
    }
    return true;
}

void solve() {
    int n;
    cin>>n;
    vector<long long> nPrimes;
    nPrimes.push_back(1);
    int num = 2;
    while(nPrimes.size() < n){
        if(isPrime(num)){
            nPrimes.push_back(num);
        }
        num++;
    }
    cout<<1<<" ";
    for(int i=1; i<n; i++){
        cout<<(nPrimes[i]*nPrimes[i-1])<<" ";
    }
    cout<<endl;
    return;
}

int main() {
    fastio();

    int t;
    cin >> t;
    while(t--) {
        solve();
    }

    return 0;
}