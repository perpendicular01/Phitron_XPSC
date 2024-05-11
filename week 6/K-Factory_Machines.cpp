#include<bits/stdc++.h>
using namespace std;
#define ll long long 


int main(){
    int t;
    cin >> t;

    while(t--){
        int n, k;
        cin >> n >> k;
        
        vector<ll> arr(n);
        for(int i=0; i<n; i++){
            cin >> arr[i];
        }

        auto ok = [&](ll m){   
            ll count = 0;
            
            for(int i=0 ; i<n ; i++){
                ll x = m/arr[i];
                count += (x); 
                if(count >= k){       
                    return true;
                } 
            }
            return false;
        };


        ll l=1, r=1e18, mid, res;
        
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