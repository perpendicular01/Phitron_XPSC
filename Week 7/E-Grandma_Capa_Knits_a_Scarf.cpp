#include<bits/stdc++.h>
using namespace std;
#define ll long long
const ll inf = 1e9;


int main(){
    int t;
    cin >> t;
    
    while(t--){
        int n;
        string s;
        cin >> n >> s;

        int res = 1e9;
        for(int i='a'; i<='z'; i++){
            int l=0, r=n-1;
            int flag=0;
            
            while(l<=r){
                if(s[l]==s[r]){
                    l++;
                    r--;
                }
                else{
                    if(s[l]==i){
                        l++;
                        flag++;
                    }
                    else if(s[r]==i){
                        r--;
                        flag++;
                    }
                    else{
                        flag = 1e9;
                        break;
                    }
                }
            }
            res = min(res, flag); 
        }

        if(res == 1e9){
            cout << -1 << endl;
        }
        else{
            cout << res << endl;
        }
    }
}
