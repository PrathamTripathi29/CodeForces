#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define fastio() ios::sync_with_stdio(false); cin.tie(NULL);

void solve() {
    long long a, b,x;
    cin>>a>>b>>x;
    long long mn = LLONG_MAX;
    long long oria = a;
    long long orib = b;
    vector<int> aqs;
    vector<int> bqs;
    while(a > 0){
        aqs.push_back(a);
        a /= x;
    }
    if(aqs.back() != 0)
    aqs.push_back(0);
    while(b > 0){
        bqs.push_back(b);
        b /= x;
    }
    if(bqs.back() != 0)
    bqs.push_back(0);
    long long cost = 0;
    for(int i=0; i<aqs.size(); i++){
        for(int j=0; j<bqs.size(); j++){
            long long cost = i + j + abs(aqs[i] - bqs[j]);
            mn = min(mn, cost);
        }
    }
    cout<<mn<<endl;
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