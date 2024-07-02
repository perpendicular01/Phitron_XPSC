#include<bits/stdc++.h>
using namespace std;
#define ll long long

void solve(){
    int n;
    cin >> n;

    vector<ll> arr(n);

    for(int i=0; i<n; i++){
        cin >> arr[i];
    }

    bool flag = true;

    for(int i=1; i<=n; i++){
        
        bool flag2 = false;

        for(int j=i+1; j>=2; j--){

            if(arr[i-1]%j!=0){
                flag2 =true;
                break;
            }
        }
        flag &= flag2;
    }

    if(flag){
        cout << "YES" << endl;
    }
    else{
        cout << "NO" << endl;
    }
    
}

int main(){
    int t;
    cin >> t;
    
    while(t--){
        solve();
    }
    
}
