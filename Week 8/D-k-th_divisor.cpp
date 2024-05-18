// https://codeforces.com/problemset/problem/762/A

#include<bits/stdc++.h>
using namespace std;
#define ll long long 

int main(){
    ll n, k;
    cin >> n >> k;

    vector<ll> arr;

    for(ll i=1; i<=sqrt(n); i++){
        if(n%i == 0){
            arr.push_back(i);

            if(n/i != i){
                arr.push_back(n/i);
            }
        }
    }

    sort(arr.begin(), arr.end());

    if(k <= arr.size()){
        cout << arr[k-1] << endl;
    }
    else{
        cout << -1 << endl;
    }
}
