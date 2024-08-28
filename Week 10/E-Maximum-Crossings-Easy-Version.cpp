#include<bits/stdc++.h>
using namespace std;

#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>

using namespace __gnu_pbds;


template <typename T> using pbds = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;

#define ll long long

int main(){
    int t;
    cin >> t;
    
    while(t--){
        int n;
        cin >> n;
        vector<ll> arr(n+1);
        for (int i=1; i<=n; i++){
            cin >> arr[i];
        }

        pbds<pair<ll, int>> p;
        
        ll ans = 0;
        for (int i=1; i<=n; i++){
            ll k = p.order_of_key({arr[i], INT_MIN}); 
            ans += p.size() - k;                   
            p.insert({arr[i], i});
        }
        cout << ans << endl;
    }
}