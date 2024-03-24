#include<bits/stdc++.h>
using namespace std;

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

        unordered_map<int,int> mp;
        int maxi = 0;

        for(auto it: arr){
            mp[it]++;
            maxi = max(maxi, mp[it]);
        }

        int res=0, count=maxi;
        
        while(count<n){ 
            res++;  //for clone

            int remain = n-count;  
            
            if(remain>count){
                res += count;
                count *= 2;
            }
            else{
                res += remain;
                count += remain;
            }
        }

        cout << res << endl;
    }
    
}