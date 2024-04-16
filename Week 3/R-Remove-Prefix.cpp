// https://codeforces.com/problemset/problem/1714/B

#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    ll t;
    cin >> t;

    while(t--){
        ll n;
        cin >> n;

        int arr[n+1];

        for(int i=1; i<=n; i++){
            cin >> arr[i];
        }

        map<ll, bool> mp;

        ll flag = 0;

        for(int i=n; i>0; i--){
            if(mp[arr[i]]==true){
                break;
            }
            mp[arr[i]] = true;
            flag++;
        }

        cout << n-flag << endl;
    }
}