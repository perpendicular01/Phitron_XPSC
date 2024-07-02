#include<bits/stdc++.h>
using namespace std;
#define ld long double
#define ll long long

void solve(){
    ll x, y;
    cin >> x >> y;

    if(x==y){
        cout << "=" << endl;
        return;
    }

    ld m = y*log(x);
    ld n = x*log(y);

    if(m>n){
        cout << ">" << endl;
    }
    else if(m<n){
        cout << "<" << endl;
    }
    else{
        cout << "=" << endl;
    }
    
}

int main(){
    int t;
    cin >> t;
    
    while(t--){
        solve();
    }
    
}
