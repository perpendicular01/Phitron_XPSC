#include<bits/stdc++.h>
using namespace std;
#define ll long long int

int main(){
    int t;                  
    cin>>t;

    while(t--){
        string s;
        cin >> s;

        vector<ll> count(26);

        for(int i=0; i<s.size(); i++){
            count[s[i]-'a']++;
        }

        int odd=0, even=0;
        for(int i=0 ; i<26 ; i++){
            if(count[i]%2==0){
                if(count[i]!=0){
                    even++;
                }
            }
            else{
                odd = count[i];
            }
        }
        if(even>1 || (odd>1 && even!=0)){
            cout << "YES" << endl;
        }
        else{
            cout << "NO" << endl;
        }
    }
}
