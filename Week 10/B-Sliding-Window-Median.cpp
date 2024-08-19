#include<bits/stdc++.h>
using namespace std;

#include<ext/pb_ds/assoc_container.hpp>
#include<ext/pb_ds/tree_policy.hpp>

using namespace __gnu_pbds;


template <typename T> using pbds = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;

int main(){
    int n, k;
    cin >> n >> k;

    vector<int> arr(n);

    for(int i=0; i<n; i++){
        cin >> arr[i];
    }

    int l=0, r=0;
    pbds<pair<int, int>> p;

    while(r < n){
        p.insert({arr[r], r});

        if((r-l+1) == k){
            int pos = (k/2);
            if(k%2 == 0){
                pos--;
            }

            auto it = p.find_by_order(pos);
            cout << it->first << " ";

            p.erase({arr[l], l});
            l++;
        }

        r++; 

    }

    cout << endl;
}