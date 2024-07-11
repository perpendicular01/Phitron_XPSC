#include<bits/stdc++.h>
using namespace std;
#define ll long long


ll prime(ll n){
    
    while(n%2==0){
        return 2;
        n = n/2;
    }

    for(ll i=3; i*i<=n; i=i+2){
        while(n%i==0){
            return i;
            n = n/i;
        }
    }
    if(n>2){
        return n;
    }

    return -1;
}


void solve(){
    ll l, r;
    cin >> l >> r;

    if(r<=3){
        cout << -1 << endl;

        return;
    }

    if(l < r){

        if(r%2 != 0){
            r--;
        }

        cout << 2 << " " << r-2 << endl;

        return;
    }
    
    ll pr = prime(l);   // l er prime

    if(pr == l){
        cout << -1 << endl;
    }

    else{
        cout << pr << " " << l-pr << endl;
    }
    
}

int main(){
    int t;
    cin >> t;
    
    while(t--){
        solve();
    }
    
}
