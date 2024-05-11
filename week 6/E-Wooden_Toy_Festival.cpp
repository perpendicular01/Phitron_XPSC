#include<bits/stdc++.h>
using namespace std;
#define ll long long 

int main(){
    int t;
    cin >> t;

    while(t--){
        ll n;
        cin >> n;
        vector<ll> arr(n);

        for(ll i=0; i<n; i++){
            cin >> arr[i];
        }

        sort(arr.begin(), arr.end());

        auto ok = [&](ll mid){
            ll j=0, count=1;
            for(ll i=0; i<n; i++){
                if(arr[i]-arr[j] > 2*mid){
                    count++;
                    j=i;
                }
            }
            return count<=3;
        };

        ll l=0, r=1e9, mid, res=0;
        
        while(l<=r){
            mid=(l+r)/2;
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
}