#include<bits/stdc++.h>
using namespace std;
#define ll long long

void solve(){
    ll n, k, q;
    cin >> n >> k >> q;

    int a[k+1], b[k+1];
    a[0] = 0;
    b[0] = 0;

    for(int i=1; i<=k; i++){
        cin >> a[i];
    }

    for(int i=1; i<=k; i++){
        cin >> b[i];
    }

    while(q--){
        int val;
        cin >> val;

        if(val == 0){
            cout << 0 << endl;
            continue;
        }

        if(val == n){
            cout << b[k] << endl;
            continue;
        } 
        ll idx = upper_bound(a, a+k+1, val) - a;

        ll dis = a[idx]-a[idx-1];
        ll time = (b[idx]-b[idx-1]);

        ll extra_dis = val-a[idx-1];

        ll extra_time = (extra_dis*time)/dis;

        cout << b[idx-1]+extra_time << endl;
    }
    cout << endl;


    
}

int main(){
    int t;
    cin >> t;

    while(t--){
        solve();
    }
         
    
}