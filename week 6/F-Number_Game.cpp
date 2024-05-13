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

        for(ll i=0; i<n; i++){
            cin >> arr[i];
        }

        auto ok = [&](ll m){

            multiset<ll> ms;

            for(auto it: arr){
                ms.insert(it);
            }

            for(ll i=1; i<=m; i++){
                if(ms.empty()){
                    return false;
                }

                ll flag = m-i+1;
                auto it = ms.upper_bound(flag);

                if(it==ms.begin()){
                    return false;
                }

                it--;
                ms.erase(it);

                if(!ms.empty()){
                    it = ms.begin();
                    ms.erase(it);
                    ms.insert(*it+flag);
                }

            }
            return true;
        };


        ll l=0, r=105, mid, res;

        while(l<=r){
            mid=(l+r)/2;
            
            if(ok(mid)){
                res = mid;
                l = mid+1;
            }

            else{
                r = mid-1;
            }
        }

        cout << res << endl;
    }
}