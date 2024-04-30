#include<bits/stdc++.h>
using namespace std;
#define ll long long int

int main(){
    int t;                  
    cin>>t;

    while(t--){
        int n;
        cin >> n;

        vector<ll> arr(n);

        for(int i=0; i<n; i++){
            cin >> arr[i];
        }

        ll negative=0, zero=0, sum=0;
        ll mini = INT_MAX;

        for(int i=0; i<n; i++){
            if(arr[i]==0){
                zero++;
            }
            if(arr[i]<0){
                negative++;
            }
            sum += abs(arr[i]);
            mini = min(mini, abs(arr[i]));
        }

        if(negative%2==1 && zero==0){
            sum -= 2ll*mini;
        }

        cout << sum << endl;
    }
}
