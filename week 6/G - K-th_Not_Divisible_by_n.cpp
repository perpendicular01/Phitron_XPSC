#include<bits/stdc++.h>
using namespace std;
#define ll long long 
const int N = 1e4+10;
map<ll,ll> mp;

int main(){
    int t;
    cin >> t;

    while(t--){
        ll n, k;
        cin >> n >> k;

        auto ok=[&](ll mid){
            return mid-(mid/n)>=k;
        };

        ll l=1;
        ll r=2e9;
        ll mid, res=0;
        while(l<=r){
            mid = (l+r)/2;
            if(ok(mid)){
                res=mid;
                r=mid-1;
            }
            else{
                l=mid+1;
            }
        }
        cout << res << endl;
    }