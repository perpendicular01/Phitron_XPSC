// https://codeforces.com/problemset/problem/1790/C

#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;

    while(t--){
        int n;
        cin >> n;

        int matrix[n+1][n];

        for(int i=1; i<=n; i++){
            for(int j=1; j<n; j++){
                cin >> matrix[i][j];
            }
        }
      /*  
        for(int i=1; i<=n; i++){
            for(int j=1; j<n; j++){
                cout <<  matrix[i][j] << " ";
            }
            cout << endl;
        }
      */
        unordered_map<int, int> a;
        unordered_map<int, int> b;

        for(int i=1; i<=n; i++){
            a[matrix[i][1]] = i;
            b[matrix[i][1]]++;
        }

        int idx, val;

        for(auto it: b){
            if(it.second == n-1){
                val = it.first;
            }

            else{
                idx = it.first;
            }
        }

        cout << val << " ";

        for(int i=1; i<n; i++){
            cout << matrix[a[idx]][i] << " ";
         }

         cout << endl;
    }

    return 0;
}