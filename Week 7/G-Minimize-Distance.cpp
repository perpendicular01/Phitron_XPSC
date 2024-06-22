//https://codeforces.com/problemset/problem/1591/C

#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n, k;
    cin >> n >> k;

    vector<int> pos, neg;

    for(int i=0; i<n; i++){
        int a;
        cin >> a;

        if(a>0){
            pos.push_back(a);
        }
        else if(a<0){
            neg.push_back(-a);
        }
    }

    sort(pos.begin(), pos.end());
    sort(neg.begin(), neg.end());

    long long res = 0;

    for(int i=pos.size()-1; i>=0; i-=k){
        res += 2*pos[i];
    }

    for(int i=neg.size()-1; i>=0; i-=k){
        res += 2*neg[i];
    }

    int maxi;

    if(neg.empty()){
        maxi = 0;
    }
    else{
        maxi = neg.back();
    }

    if(!pos.empty()){
        maxi = max(maxi, pos.back());
    }

    // cout << x << "  " << y << endl;

    cout << res-maxi << endl;
}

int main(){
    int t;
    cin >> t;

    while(t--){
        solve();
    }
}