#include<bits/stdc++.h>
using namespace std;
#define ll long long 

int main(){
    ll n, x;
    cin >> n >> x;

    map<ll, ll> mp;
    ll sum=0, count=0;
    mp[sum] = 1;

    for(int i=0; i<n; i++){
        ll a;
        cin >> a;

        sum += a;

        count += mp[sum-x];

        mp[sum]++;
    }

    cout  << count << endl;
}