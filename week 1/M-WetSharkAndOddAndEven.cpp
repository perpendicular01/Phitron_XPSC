#include<bits/stdc++.h>
using namespace std;

#define ll long long

int main(){
    int n;
    cin >> n;

    vector<ll> arr(n+1);

    for(int i=0; i<n; i++){
        cin >> arr[i];
    }

    ll even=0, odd=0;

    ll minOdd = INT_MAX;

    for(int i=0 ; i<n ; i++){
        if(arr[i]%2==0){
            even += arr[i];
        }
        else{
            odd += arr[i];
            minOdd = min(minOdd, arr[i]);
        }
    }
    if(odd%2==0){
        cout << even+odd << endl;
    }
    else{
        cout << even+odd-minOdd << endl;
    }
}