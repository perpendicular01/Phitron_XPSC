// https://www.codechef.com/problems/MOONSOON

#include<bits/stdc++.h>
using namespace std;
#define ll long long 

int main(){
    ll t;
    cin >> t;

    while(t--){
        ll n, m, h;
        cin >> n >> m >> h;

        vector<ll> car(n);
        vector<ll> power(m);

        for(ll i=0; i<n; i++){
            cin >> car[i];
        }
        
        for(ll i=0; i<m; i++){
            cin >> power[i];
        }

        sort(car.begin(), car.end(), greater<>());
        sort(power.begin(), power.end(), greater<>());

        ll cost = 0;

        for(int i=0; i<min(n, m); i++){
            cost += min(power[i]*h,  car[i]);
        }

        cout << cost << endl;

        
    }

}