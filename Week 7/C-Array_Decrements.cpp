#include<bits/stdc++.h>
using namespace std;
#define ll long long

void solve(){
        int n;
        cin >> n;

        vector<ll> a(n), b(n);

        for(int i=0; i<n; i++){
            cin >> a[i];
        }

        ll maxi = 0;
        set<ll> st;

        for(int i=0; i<n; i++){
            cin >> b[i];

            if(b[i]==0){
                maxi = max(maxi, a[i]);
            }
            else{
                st.insert(a[i]-b[i]);
            }
        }

        for(int i=0; i<n; i++){
            if(b[i]>a[i]){
                cout << "NO" << endl;
                return;
            }
            if(b[i] == 0){
                maxi = max(maxi, a[i]);
            }
            else{
                st.insert(a[i]-b[i]);
            }
        }

        if(st.size() == 0){
            cout << "YES" << endl;
        }
        else if(st.size()==1){
            for(auto it : st){
                if(it >= maxi){
                    cout << "YES" << endl;
                    return;
                }
            }
            cout << "NO" << endl;
        }
        else{
            cout << "NO" << endl;
        }
}

int main(){
    ll t;
    cin >> t;

    while(t--){
        solve();
    }
}