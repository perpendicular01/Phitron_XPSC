// https://codeforces.com/problemset/problem/1790/D


#include<bits/stdc++.h>
using namespace std;
#define ll long long 

int main(){
    int t;
    cin >> t;

    while (t--){
        ll n;
        cin >> n;

        vector<ll> arr(n);
        map<ll, ll> mp;

        for(int i=0; i<n; i++){
            cin >> arr[i];
            mp[arr[i]]++;
        }

        sort(arr.begin(), arr.end());

        ll res = 0;

        for(int i=0; i<n; i++){
            int value = arr[i];

            if(mp[value] != 0){
                res++;

                while(mp[value] > 0){
                    mp[value]--;
                    value++;
                }
            }
        }

        cout << res << endl;

    }
    return 0;
}