#include<bits/stdc++.h>
using namespace std;
#define ll long long 

int main(){
    int t;
    cin >> t;

    while(t--){
        ll n, k;
        cin >> n >> k;
        
        vector<ll> arr(k);
        for(int i=0; i<k; i++){
            cin >> arr[i];
        }

        sort(arr.begin(), arr.end(), greater<ll>());

        auto ok = [&](ll mid){
            int pos = 0;
            for(int i=0; i<mid; i++){
                if(pos >= arr[i]){
                    return false;
                }
                pos += n-arr[i];
            }
            return true;
        };

        ll l=0, r=k, mid, res;
        while(l<=r){
            mid = (l+r)/2;

            if(ok(mid)){
                res=mid;
                l=mid+1;
            }
            else{
                r = mid-1;
            }
        }
        cout << res << endl;
    }
}