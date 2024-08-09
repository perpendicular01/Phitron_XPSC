#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    ll n;
    cin >> n;

    map<ll, ll> mp;

    ll sum=0, count=0;
    mp[sum] = 1;

    for(int i=0; i<n; i++){
        ll a;
        cin >> a;

        sum += a;

        ll rem = sum%n;

        if(rem < 0){
            rem += n;
        }
        
        if(mp[rem]){
            count += mp[rem];
        }

        mp[rem]++;

    }

    cout << count << endl;        
    
}