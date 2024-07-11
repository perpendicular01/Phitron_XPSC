#include<bits/stdc++.h>
using namespace std;
#define ll long long

void solve(){
    int n;
    cin >> n;

    vector<int> arr(n+1);

    unordered_map<int, int> mp;
    
    for(int i=1; i<=n; i++){
        cin >> arr[i];
        
        mp[arr[i]] = i;         
    }

    int res = 0;

    for(auto it: mp){
        for(auto j: mp){

            if(__gcd(it.first, j.first) == 1){
                res = max(res, it.second+j.second);
            }
        }
    }

    if(res){
        cout << res << endl;
    }
    else{
        cout << -1 << endl;
    }

    
    
}

int main(){
    int t;
    cin >> t;
    
    while(t--){
        solve();
    }
    
}
