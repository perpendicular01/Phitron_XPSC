#include<bits/stdc++.h>
using namespace std;
#define ll long long

void solve(){
    int n;
    cin >> n;

    vector<ll> arr(n);

    for(int i=0; i<n; i++){
        cin >> arr[i];
    }

    map<ll, int> mp;
    
    int count=0;
    int res=0;

    for(int i=0; i<n; i++){
        if(mp.find(arr[i]) == mp.end()){
            mp.insert({arr[i], i});
        }

        else{
            if(mp[arr[i]] >= count){
                count = mp[arr[i]]+1;
            }
            mp[arr[i]] = i;
        }
        res = max(res, i-count+1);
    }

    cout << res << endl;
    
}


int main(){
  //  int t;
  //  cin >> t;

  //  while(t--){
        solve();
  //  }
}