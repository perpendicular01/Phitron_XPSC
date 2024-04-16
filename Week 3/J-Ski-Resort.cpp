// https://codeforces.com/problemset/problem/1840/C


#include<bits/stdc++.h>
using namespace std;
#define ll long long int

int main(){
    ll t;
    cin >> t;

    while(t--){
        ll n, k, q;
        cin >> n >> k >> q;

        vector<ll> arr(n);

        for(int i=0; i<n; i++){
            cin >> arr[i];
        }

        ll way=0, cons=0;

        for(int i=0; i<n; i++){
            
            if(arr[i] <= q){
                cons++;

                if(i==n-1 ||  arr[i+1]>q){

                    if(cons >= k ){
                        ll a = cons-k+1;
                        ll sum = (a * (a+1))/2;

                        way += sum;
                    }
                    cons=0;
                }
            }
        }
        cout << way << endl;
    }
}