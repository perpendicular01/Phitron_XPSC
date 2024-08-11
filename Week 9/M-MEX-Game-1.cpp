#include<bits/stdc++.h>
using namespace std;
#define ll long long

void solve(){
    ll n;
    cin >> n;

    vector<ll> arr(n);
    map<int, int> mp;

    for(int i=0; i<n; i++){
        cin >> arr[i];
        mp[arr[i]]++;
    }

    int last;
    vector<ll> b;

    for(int i=0; i<n+2; i++){
        if(mp[i] == 0){
            last = i;
            break;
        }

        else if(mp[i]==1){
            b.push_back(i);
        }
    }

    if(b.size() == 0){
        cout << last << endl;
    }
    else if(b.size() == 1){
        cout << last << endl;
    }

    else{
        cout << b[1] << endl;
    }
    
}

int main(){
    int t;
    cin >> t;

    while(t--){
        solve();
    }
         
    
}