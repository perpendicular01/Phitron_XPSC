#include<bits/stdc++.h>
using namespace std;
#define ll long long


int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int> arr(n);

        for(int i=0; i<n; i++){
            cin >> arr[i];
        }

        vector<int> b(n-1);

        for(int i=0; i<n-1; i++){
            b[i] = abs(arr[i]-arr[i+1]);
        }

        int ans = INT_MAX;
    
        ans = min(ans, b[0]);
        ans = min(ans, b[n-2]);
    

        for(int i=1 ; i<n-1 ; i++){
            int temp = max(b[i-1], b[i]);
            ans = min(ans, temp);
        }

        cout << ans << endl;

    }
}

