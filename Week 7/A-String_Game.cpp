#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        string s;
        cin >> n >> s;

        int flag = count(s.begin(), s.end(), '1');

        if(min(flag, n-flag) &  1){
            cout << "Zlatan" << endl;
        }
        else{
            cout << "Ramos" << endl;
        }
    }
}

