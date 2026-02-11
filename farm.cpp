#include <bits/stdc++.h>
using namespace std;

int farm(int n){
    vector<int> dp(n+1, 0);
    dp[0] = 1;
    for(int i = 2; i<=4; i += 2){
        for(int j = i; j <= n; j++){
            dp[j] += dp[j-i];
        }
    }
    return dp[n];
}

int main(){
    int t;
    cin>>t;
    for(int i=0; i<t; i++){
        int n;
        cin>>n;
        cout<<farm(n)<<endl;
    }
    return 0;
}