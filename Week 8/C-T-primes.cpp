#include<bits/stdc++.h>
using namespace std;
#define ll long long

bool prime(ll x){
    if(x==1){
        return false;
    }

    for(ll i=2; i*i<=x ; i++){
        if(x%i == 0){
            return false;
        }
    }
    return true;
}

bool square(ll x){
    ll root = sqrtl(x);
    return root*root == x;
}

void solve(){
    ll x;
    cin >> x;

    if(prime(sqrtl(x)) && square(x)){
        cout << "YES" << endl;
    }
    else{
        cout << "NO" << endl;
    }
}

int main(){
    int t;
    cin >> t;

    while(t--){
        solve();
    }
    
    
}