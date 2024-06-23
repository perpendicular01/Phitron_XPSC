// https://codeforces.com/problemset/problem/1594/B

#include<bits/stdc++.h>
using namespace std;
#define ll long long
const ll mod = 1e9+7;


void solve(){
    ll n, k;
    cin >> n >> k;

    ll j=1;
    ll res=0;

    while(k>0){
        
        if(k%2 == 1){
            res = (res+j)%mod;
        }

        k /= 2;
        j = (j*n)%mod;
    }

    cout << res << endl;
}

int main(){
    int t;
    cin >> t;

    while(t--){
        solve();
    }
}