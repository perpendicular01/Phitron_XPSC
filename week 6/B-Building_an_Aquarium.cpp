#include<bits/stdc++.h>
using namespace std;
#define ll long long 

int main(){
    int t;
    cin >> t;

    while(t--){
        ll n, w;
        cin >> n >> w;
    
        vector<ll> arr(n);
    
        for(int i=0; i<n; i++){
            cin >> arr[i];
        }

        auto ok = [&](ll m){
        
            ll count = 0;
        
            for(int i=0; i<n; i++){
                if(arr[i]<m){
                    count += m-arr[i];
                }
            }
            return count<=w;    
        };

        ll l=0, r=2e9;
        ll mid, res;
        
        while(l<=r){
            mid = (l+r)/2;
            if(ok(mid)){    
                res = mid;
                l=mid+1;
            }
            else{
                r = mid-1;
            }
        }

        cout << res << endl;
    }
}