#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    ll t;
    cin >> t;

    while(t--){
        int n;
        cin >> n;

        vector<ll> a(n);
        
        map<ll, ll> mp;

        for(int i=0; i<n; i++){
            cin >> a[i];
            mp[a[i]]++;
        }

        vector<ll> per;
        for(auto it : mp){
            ll val = it.first;
            int freq = it.second;

            if(val <= n){
                for(int i=1; i<freq; i++){
                    per.push_back(val);
                    mp[val] = 1;
                }
            }
            else{
                for(int i=1; i<=freq; i++){
                    per.push_back(val);
                }
            }
        }

        int count = 1;
        int ans = 0;
        for (int i=0; i<per.size(); i++){
            for(int j=count; j<=n; j++){
                if(mp[j]==1){
                    count++;
                }
                else{
                    break;
                }
            }

            int temp = (per[i]-1)/2;
            
            if(count<=temp){
                count++;
                ans++;
            }
            else{
                cout << -1 << endl;
                break;
            }
        }
        cout << ans << endl;
    }
}