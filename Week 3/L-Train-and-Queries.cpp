//https://codeforces.com/problemset/problem/1702/C


#include<bits/stdc++.h>
using namespace std;
#define ll long long 

int main(){
    int t;
    cin >> t;
    
    while(t--){
        ll n, k;
        cin >> n >> k;

        vector<int> arr(n);
        map<ll, pair<ll, ll>> mp;

        for(int i=0; i<n; i++){
            cin >> arr[i];

            if(mp.count(arr[i]) == 0){
                mp[arr[i]].first = i;
                mp[arr[i]].second = i;
            }
            else{
                mp[arr[i]].second = i;
            }
        }

        while(k--){
            ll a, b;
            cin >> a >> b;

            if(!mp.count(a)  ||  !mp.count(b)  || mp[a].first>mp[b].second){
                cout << "No" << endl;
            }

            else{
                cout << "Yes" << endl;
            }
        }

    
    }
}