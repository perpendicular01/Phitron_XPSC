// https://codeforces.com/problemset/problem/1913/B

#include<bits/stdc++.h>
using namespace std;

void solve(){
    string s;
    cin >> s;

    int one=0, zero=0;

    for(int i=0; i<s.length(); i++){
        if(s[i]=='0') zero++;
        else one++;
    }

    for(int i=0; i<s.length(); i++){
        if(s[i]=='0'){
            if(one>0){
                one--;
            }
            else break;
        }

        if(s[i]=='1'){
            if(zero>0){
                zero--;
            }
            else break;
        }

    }

    cout << one+zero << endl;


}

int main(){
    int t;
    cin >> t;

    while(t--){
        solve();
    }
}