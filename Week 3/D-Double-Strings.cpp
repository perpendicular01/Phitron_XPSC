#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;

    while(t--){
        int n;
        cin >> n;

        vector<string> s(n);
        map<string, bool> mp;

        for(int i=0; i<n; i++){
            cin >> s[i];
            mp[s[i]] = true;
        }

        for(int i=0; i<n; i++){
            bool flag = false;

            for(int j=1; j<s[i].size(); j++){
                string s1 = s[i].substr(0, j);
                string s2 = s[i].substr(j, s[i].size()-1);

               // cout << s1 << " " << s2;
               // cout << endl;
            

            if(mp[s1]  &&  mp[s2]){
                flag = true;
                break;
            }
            }

            if(flag){
                cout << 1;
            }
            else{
                cout  << 0;
            }
        }

        cout << endl;

    }
    return 0;
}