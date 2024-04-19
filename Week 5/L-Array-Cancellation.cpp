#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    ll t;
    cin >> t;

    while(t--){
        ll n;
        cin >> n;

        vector<ll> arr(n);

        ll pos = 0, neg=0;

        for(int i=0; i<n; i++){
            ll a;
            cin >> a;

            if(a>=0){
                pos += a;
            }
            else{
                if(a+pos >= 0){
                    pos += a;
                }
                else{
                    a += pos;
                    pos = 0;
                    neg += a;
                }
            }
        }

        cout << -neg << endl;
    }
}