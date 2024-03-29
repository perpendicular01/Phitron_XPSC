#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;

    while(t--){
        int n;
        string s;
        cin >> n >> s;

        string ss = "";

        for(int i=0; i<n; i++){
            if(tolower(s[i]) != tolower(s[i+1])){
                ss += tolower(s[i]);
            }
        }
        if(ss == "meow"){
            cout << "YES" << endl;
        }
        else{
            cout << "NO" << endl;
        }
    }
}