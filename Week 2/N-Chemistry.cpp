#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    
    while(t--){
        int n, k;
        string s;
        cin >> n >> k >> s;

        vector<int> fq(26);

        for(int i=0; i<n; i++){
            fq[s[i]-'a']++;
        }

        int remove=0;

        for(int i=0; i<26; i++){
            if(fq[i]%2!=0){
                remove++;
            }
        }
        if(remove-1<0) remove=0;
        else remove -= 1;
    
        if(k<=n && k>=remove){
            cout << "YES" << endl;
        }
        else{
            cout << "NO" << endl;
        }

    }
}