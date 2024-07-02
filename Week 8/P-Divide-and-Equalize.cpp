#include<bits/stdc++.h>
using namespace std;
#define ld long double
#define ll long long

void solve(){
    ll n;
    cin >> n;
    
    vector<int> arr(n);
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }
    unordered_map<int,int> mp;
    for(int i=0; i<n; i++){
        for(int j=2; j*j<=arr[i]; j++){
            while(arr[i]%j==0){
                mp[j]++;
                arr[i]/=j;
            }
        }
        if(arr[i]>1){
            mp[arr[i]]++;
        }
    }

    for(auto it: mp){
        if(it.second%n!=0){
            cout << "NO" << endl;
            return;
        }
    }
    cout << "YES" << endl;
}

int main(){
    int t;
    cin >> t;
    
    while(t--){
        solve();
    }
    
}
