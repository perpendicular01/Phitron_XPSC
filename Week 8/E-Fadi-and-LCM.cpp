#include<bits/stdc++.h>
using namespace std;
#define ll long long

ll lcm(ll a, ll b){
    return (a/__gcd(a,b))*b;
}
    

int main(){
    ll n;
    cin >> n;

    ll res=0;

    for(ll i=1; i*i<=n; i++){
        if(n%i==0 && lcm(i, n/i)==n){
            res = i;
        }
    }
    cout << res << " " << n/res << endl;
    
}
