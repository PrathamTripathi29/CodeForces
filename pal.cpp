#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define fastio() ios::sync_with_stdio(false); cin.tie(NULL);

void solve() {
    long long n;
    cin>>n;
    int rem = n%12;
    long long a;
    long long b;
    if(rem <= 9){
        a = rem;
    }
    if(rem == 10){
        a = 22;
    }
    if(rem == 11){
        a = 11;
    }
    b = n-a;
    if(b < 0){
        cout<<-1<<endl;
        return;
    }
    cout<<a<<" "<<b<<endl;
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