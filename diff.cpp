#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define fastio() ios::sync_with_stdio(false); cin.tie(NULL);

void solve() {
    long long a;
    int n;
    int d1, d2;
    cin>>a;
    cin>>n;
    cin>>d1>>d2;
    string num = to_string(a);
    string smaller;
    string larger;
    int mismatchpos = 0;
    if(d1 > num[0] - '0'){
        for(int i=0; i<num.length()-1; i++){
            smaller += d2+'0';
        }
    } else {
        for(int i=0; i<num.length(); i++){
            if(d1+'0' != num[i] && d2+'0' != num[i]){
                mismatchpos = i;
                break;
            }
            smaller += num[i];
        }
        if(num[mismatchpos] < d1+'0'){
            int idx = mismatchpos-1;
            while(num[idx] == d1 + '0'){
                idx--;
            }
            smaller[idx] = d1+'0';
            for(int i=idx+1; i<n; i++){
                smaller[i] = d2+'0';
            }
        } else if(num[mismatchpos] > d1+'0' && num[mismatchpos] < d2+'0'){
            int idx = mismatchpos;
            smaller[idx] = d1+'0';
            for(int i=idx+1; i<n; i++){
                smaller[i] = d2+'0';
            }
        } else {
            int idx = mismatchpos;
            for(int i=idx; i<n; i++){
                smaller[i] = d2+'0';
            }
        }
    }
    mismatchpos = 0;
    if(d2 < num[0] - '0'){
        for(int i=0; i<num.length()+1; i++){
            larger += d1+'0';
        }
    } else {
        for(int i=0; i<num.length(); i++){
            if(d1+'0' != num[i] && d2+'0' != num[i]){
                mismatchpos = i;
                break;
            }
            larger += num[i];
        }
        if(num[mismatchpos] > d2+'0'){
            int idx = mismatchpos-1;
            while(num[idx] == d1 + '0'){
                idx--;
            }
            smaller[idx] = d1+'0';
            for(int i=idx+1; i<n; i++){
                smaller[i] = d2+'0';
            }
        } else if(num[mismatchpos] > d1+'0' && num[mismatchpos] < d2+'0'){
            int idx = mismatchpos;
            smaller[idx] = d1+'0';
            for(int i=idx+1; i<n; i++){
                smaller[i] = d2+'0';
            }
        } else {
            int idx = mismatchpos;
            for(int i=idx; i<n; i++){
                smaller[i] = d2+'0';
            }
        }
    }
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