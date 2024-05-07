#include<bits/stdc++.h>
using namespace std;
#define ll long long 
const int N = 1e4+10;
map<ll,ll> mp;

int main(){
    int t;
    cin >> t;

    while(t--){
        ll x;
        cin >> x;
        bool flag=false;
    
        for(ll i=1; i<N; i++){
            
            ll need = x-i*i*i;
            
            if(mp.find(need) != mp.end()){
                flag=true;
                break;
                
            }
        }
        if(flag){
            cout << "YES" << endl;
        }
        else
            cout << "NO" << endl;
    }
}