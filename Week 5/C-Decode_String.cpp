#include<bits/stdc++.h>
using namespace std;

int main(){
        int t;
        cin>>t;
        while(t--){
            int n;
            cin>>n;
            string s;           
            cin>>s;

            string ans="";

            for(int i=0;i<n;i++){
                if(i+2<n && s[i+2]=='0' && (i+3>=n || s[i+3]!='0')){
                    int temp=((s[i]-'0')*10)+(s[i+1]-'0');
                    ans.push_back((char)(96+temp));
                    i+=2;
                }
                else{
                    int temp=((s[i]-'0'));
                    ans.push_back((char)(96+temp));
                }
            }

            cout<<ans<<endl;
    }
    
}
