#include<bits/stdc++.h>
using namespace std;

int main(){
    string s1, s2;
    cin >> s1 >> s2;

    long long ans = 0;

    for(int i=0; i<s1.length(); i++){
        if(s1[i] != s2[i]){
            ans++;
        }
    }

    cout << ans << endl;
    
}
