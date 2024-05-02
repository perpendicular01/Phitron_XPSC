#include<bits/stdc++.h>
using namespace std;
#define ll long long int

int main(){
    int t;                  
    cin>>t;
    while(t--){
        ll n, c, res=0, sum=0;
        cin >> n >> c;

        vector<ll> arr(n);
        
        for(int i=0; i<n; i++){
            cin >> arr[i];
            arr[i] += i+1;
        }
        sort(arr.begin(), arr.end());
        
        for(int i=0 ; i<n ; i++){
            sum += arr[i];
            if(sum<=c){
                res++;
            }
        }
        cout << res << endl;
    }
}
