#include<bits/stdc++.h>
using namespace std;

#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>

using namespace __gnu_pbds;


template <typename T> using pbds = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;

int main(){
    int n;
    string s;
    cin >> n >> s;
    string r=s;
    reverse(r.begin(), r.end());

    map<char,vector<int>> pa, pb;

    for(int i=0; i<n; i++){
        pa[s[i]].push_back(i);
        pb[r[i]].push_back(i);
    }

    vector<int> arr(n);     
    for(char ch='a'; ch<='z'; ch++){
        for(int i=0; i<pa[ch].size(); i++){
            arr[pb[ch][i]] = pa[ch][i];
        }
    }


    pbds<int> p;
    long long ans = 0;
    for(int i=n-1 ; i>=0 ; i--){
        ans += p.order_of_key(arr[i]);
        p.insert(arr[i]);
    }
    cout << ans << endl;


}