// https://codeforces.com/contest/1741/problem/A


#include<bits/stdc++.h>
using namespace std;
#define ll long long int

int main(){
    ll t;
    cin >> t;

    while(t--){
        string s1, s2;
        cin >> s1 >> s2;

        int n1 = s1.length();
        int n2 = s2.length();

        if(s1 == s2){
            cout << "=" << endl;
            continue;
        }

        if(s1[n1-1] != s2[n2-1]){
            if(s1[n1-1] > s2[n2-1]){
                cout << "<" << endl;
            }
            else{
                cout << ">" << endl;
            }
        }

        else if(s1[n1-1]=='L'){
            if(n1 > n2){
                cout << ">" << endl;
            }
            else{
                cout << "<" << endl;
            }
        }

        else{
            if(n1 > n2){
                cout << "<" << endl;
            }
            else{
                cout << ">" << endl;
            }
        }
    }
}