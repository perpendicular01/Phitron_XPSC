#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;

    while(t--){
    int n, k;
    cin >> n >> k;

    int ans = -1;

    for(int i=0; i<n; i++){
        int a;
        cin >> a;

        if((a&k)== k){
            ans &= a;
        }
    }

    if(ans == k){
        cout << "YES" << endl;
    }
    else{
        cout << "NO" << endl;
    }

    }


}