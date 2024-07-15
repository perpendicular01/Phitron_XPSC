#include<bits/stdc++.h>
using namespace std;
#define ll long long int

void solve(){
    int n;
    cin >> n;

    vector<ll> arr(n);

    for(int i=0; i<n; i++){
        cin >> arr[i];
    }

    ll res=0;

    for(int i=0; i<n-1; i++){
        if(arr[i] > arr[i+1]){
            res += arr[i]-arr[i+1];
            arr[i+1]= arr[i];
        }
    }
 
    cout << res << endl;
     
}


int main(){
  //  int t;
  //  cin >> t;

  //  while(t--){
        solve();
  //  }
}

