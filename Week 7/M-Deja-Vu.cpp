//https://codeforces.com/problemset/problem/1891/B

#include<bits/stdc++.h>
using namespace std;
#define ll long long

void solve(){
    int n, q;
    cin >> n >> q;

    ll arr[n];
    ll qq[q];

    for(int i=0; i<n; i++){
        cin >> arr[i];
    }

    for(int i=0; i<q; i++){
        cin >> qq[i];
    }

    set<ll> st;

    for(int i=0; i<q; i++){
        
        if(st.count(qq[i])){
            continue;
        }
        st.insert(qq[i]);

        for(int j=0; j<n; j++){
            if(arr[j] % (1<<qq[i]) == 0){
                arr[j] += (1 << (qq[i]-1));
            }

        }
    }

    for(auto it: arr){
        cout << it << " ";
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