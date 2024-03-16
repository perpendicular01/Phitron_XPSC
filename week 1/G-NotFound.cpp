#include<bits/stdc++.h>
using namespace std;

int main(){
    map<int, int> arr;
    string s;
    cin >> s;

    for(int i=0; i<s.length(); i++){
        arr[s[i]-97]++;
    }

    for(int i=0; i<26; i++){
        if(arr[i] == 0){
            char ans = i+97;
            cout << ans << endl;
            return 0;
        }
    }

    cout << "None" << endl;
}