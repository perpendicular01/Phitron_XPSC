#include<bits/stdc++.h>
using namespace std;
#define ll long long 

int main(){
    int t;
    cin >> t;

    while(t--){
        int n, k;
        cin >> n >> k;
    
        vector<int> arr(n);
        
        for(int i=0; i<n; i++){
            cin >> arr[i];
        }

        sort(arr.begin(), arr.end());

        auto ok = [&](ll mid){
            ll count=0;
            for(int i=n/2; i<n; i++){
                if(arr[i]<mid){
                    count += mid-arr[i];
                }
            }
            return count<=k;
        };

        ll l=1, r=2e9;
        ll mid, res=0;
        
        while(l<=r){
            mid = (l+r)/2;
            if(ok(mid)){
                res=mid;
                l=mid+1;
            }
            else{
                r=mid-1;
            }
        }

        cout << res << endl;
    }
}