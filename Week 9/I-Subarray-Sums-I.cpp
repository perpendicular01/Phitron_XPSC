#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    ll n, x;
    cin >> n >> x;

    map<ll, ll> mp;

    ll sum = 0;
    ll count = 0;
    mp[sum] = 1;

    for(int i=0; i<n; i++){
        int a;
        cin >> a;

        sum += a;

        if(mp[sum-x]){
            count++;
        }

       // cout << count << endl;

        mp[sum] = 1;
    }
    
    cout << count << endl;
}