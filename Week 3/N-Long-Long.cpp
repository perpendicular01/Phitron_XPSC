// https://codeforces.com/problemset/problem/1843/B

#include<bits/stdc++.h>
using namespace std;
#define ll long long int

int main(){
    ll t;
    cin >> t;

    while(t--){
        int n;
        cin >> n;

        vector<ll> arr(n);

        ll sum=0;
        for(int i=0; i<n; i++){
            cin >> arr[i];
            sum += abs(arr[i]);
        }

        ll count=0;
        bool flag=false;

        for(int i=0; i<n; i++){
            
            if(count!=0 && arr[i]>0){
                flag = true;
            }
            else if(count==0  &&  arr[i]<0){
                count++;
            }
            else if(flag==true && arr[i]<0){
                count++;
                flag = false;
            }
        }

        cout << sum << " " << count << endl;

        
    }
}