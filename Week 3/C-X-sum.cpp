#include<bits/stdc++.h>
using namespace std;
#define ll long long 

int arr[201][201];


long long solve(int n, int m, int x, int y){
    ll res = 0;

    int idx = 0;

    while(x-idx>-1  &&  y-idx>-1){
        res += arr[x-idx][y-idx];
        idx++;
    }

    idx=0;
    while(x-idx>-1  &&  y+idx<m){
        res += arr[x-idx][y+idx];
        idx++;
    }

    idx=0;
    while(x+idx<n  &&  y-idx>-1){
        res += arr[x+idx][y-idx];
        idx++;
    }

    idx=0;
    while(x+idx<n  &&  y+idx<m){
        res += arr[x+idx][y+idx];
        idx++;
    }

    return res-3*arr[x][y];
}


int main(){
    int t;
    cin >> t;

    while(t--){
    
        int n, m;
        cin >> n >> m;

       

        for(int i=0; i<n; i++){
            for(int j=0; j<m; j++){
                cin >> arr[i][j];
            }
        }

        ll  res = 0;

        for(int i=0; i<n; i++){
            for(int j=0; j<m; j++){
                res = max(res, solve(n, m, i, j));
            }
        }

        cout << res << endl;

        memset(arr, 0, sizeof(arr));
    }

    return 0;
}