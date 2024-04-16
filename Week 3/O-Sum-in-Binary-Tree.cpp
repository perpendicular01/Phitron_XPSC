// https://codeforces.com/problemset/problem/1843/C

#include<bits/stdc++.h>
using namespace std;
#define ll long long 

int main(){
    ll t;
    cin >> t;

    while(t--){
        ll n;
        cin >> n;

        ll sum=0;

        while(n>0){
            sum += n;
            n /= 2;
        }

        cout << sum << endl;
    }
}