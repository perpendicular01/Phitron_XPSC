#include<bits/stdc++.h>
using namespace std;
#define ll long long int

int main(){
    int t;                  
    cin>>t;

    while(t--){
        ll capacity;
        ll b, n;
        cin >> capacity >> b >> n;

        vector<ll> arr(n);
        for(int i=0; i<n; i++){
            cin >> arr[i];
        }

        ll res = b;
        for(int i=0 ; i<n ; i++){
            res += min(capacity, arr[i]+1);
            res--;
        }
        cout << res << endl;
    }
}
