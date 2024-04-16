// https://codeforces.com/problemset/problem/1800/C1

#include<bits/stdc++.h>
using namespace std;
#define ll long long int

int main(){
    ll t;
    cin >> t;

    while(t--){
        ll n;
        cin >> n;

        vector<ll> arr(n);
        priority_queue<ll> pq;

        ll res=0;

        for(int i=0; i<n; i++){
            cin >> arr[i];
        }

        for(int i=0; i<n; i++){
            if(arr[i] != 0){
                pq.push(arr[i]);
            }
            else{
                if(!pq.empty()){
                    res += pq.top();
                    pq.pop();
                }
            }
        }

        cout << res << endl;
    }
}