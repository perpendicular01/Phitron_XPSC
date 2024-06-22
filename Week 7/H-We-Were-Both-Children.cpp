//https://codeforces.com/problemset/problem/1850/F

#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin >> n;

    map<int, int> mp;
    vector<int> arr(n);

    for(int i=0; i<n; i++){
        cin >> arr[i];
        mp[arr[i]]++;
    }

    int ans[200005]={0};   // 0 defien must
    int res = INT_MIN;

    for(int i=1; i<=n; i++){
        int curr = i;

        while(curr <= n){
            ans[curr] += mp[i];
            curr += i;
        }

        res = max(res, ans[i]);

    }

    cout << res << endl;
}

int main(){
    int t;
    cin >> t;

    while(t--){
        solve();
    }
}