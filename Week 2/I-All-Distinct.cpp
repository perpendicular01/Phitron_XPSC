#include<bits/stdc++.h>
using namespace std;


int main(){
    int t;
    cin >> t;

    while(t--){
       int n;
       cin >> n;

       vector<int> arr(n);
       unordered_map<int,int> mp;

       for(int i=0; i<n; i++){
            cin >> arr[i];
           
       }

     //  sort(arr.begin(), arr.end());

       for(auto it: arr){
            mp[it]++;
       }

       int flag = 0;

       for(auto it: mp){
            flag += (it.second-1);
       }

       int ans = n-flag;


       if(flag%2 == 1){
            ans--;
       }
       cout << ans << endl;

       
    }
    
    
}
