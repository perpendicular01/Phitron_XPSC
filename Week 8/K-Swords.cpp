#include<bits/stdc++.h>
using namespace std;
#define ll long long

void solve(){
    ll n;
    cin >> n;

    vector<ll> arr(n);

    ll maxi=INT_MIN;
    
    for(int i=0; i<n; i++){
        cin >> arr[i];
        maxi = max(maxi, arr[i]);
    }

    ll k=0;
    ll sum=0;

    for(int i=0; i<n; i++){
        k = __gcd(k, maxi-arr[i]);
        sum += maxi-arr[i];
    }
    if(k==0){
        cout << 0 << endl;
    }
    else{
        cout << sum/k << " " << k << endl;
    }
}

int main(){
    int t;
    cin >> t;
    
    while(t--){
        solve();
    }
    
}
