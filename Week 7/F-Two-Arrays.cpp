// https://codeforces.com/problemset/problem/1589/C

#include<bits/stdc++.h>
using namespace std;
#define ll long long

void solve(){
    ll n;
    cin >> n;

    vector<ll> a(n), b(n);

    for(int i=0; i<n; i++){
        cin >> a[i];
    }

    for(int i=0; i<n; i++){
        cin >> b[i];
    }

    sort(a.begin(), a.end());
    sort(b.begin(), b.end());

    bool flag = false;

    for(int i=0; i<n; i++){
        if(a[i]>b[i]  ||  b[i]-a[i]>1){
            flag = true;
            break;
        }
    }

    if(flag){
        cout << "NO" << endl;
    }
    else{
        cout << "YES" << endl;
    }

}

int main(){
    ll t;
    cin >> t;

    while(t--){
        solve();
    }
}