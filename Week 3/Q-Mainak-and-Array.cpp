// https://codeforces.com/problemset/problem/1726/A

#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    ll t;
    cin >> t;

    while(t--){
        ll n;
        cin >> n;

        vector<ll> arr(n);

        for(int i=0; i<n; i++){
            cin >> arr[i];
        }

        if(n==1){
            cout << 0 << endl;
            continue;
        }

        ll ans = arr[n-1]-arr[0];

        //first one fixed
        for(int i=1; i<n; i++){
            ans = max(ans, arr[i]-arr[0]);
        }

        //last one fixed
        for(int i=0; i<n-1; i++){
            ans = max(ans, arr[n-1]-arr[i]);
        }

        // random first to second
        for(int i=1; i<n; i++){
            ans = max(ans, arr[i-1]-arr[i]);
        }

        cout << ans << endl;
    }
}