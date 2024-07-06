#include<bits/stdc++.h>
using namespace std;
#define ll long long
const ll MOD = 1e9+7;

ll Pow(ll a, ll b){
    ll res=1;

    a %= MOD;

    while(b){
        if(b&1){
            res = (res*a)%MOD;
        }
        a = (a*a)%MOD;
        b = (b>>1);
    }
    return res;
}

void solve(){
    ll a, b, l;
    cin >> a >> b >> l;

    set<int> st;

    for(int i=0; Pow(a,i)<=l; i++){
        for(int j=0; Pow(b,j)<=l; j++){
            ll res = Pow(a,i) * Pow(b,j);
            if(l%res == 0){
                st.insert(l/res);
            }
        }
    }
     cout << st.size() << endl;
    
}


int main(){
    int t;
    cin >> t;
    
    while(t--){
        solve();
    }
    
}
