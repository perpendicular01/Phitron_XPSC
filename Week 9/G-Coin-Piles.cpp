#include<bits/stdc++.h>
using namespace std;
#define ll long long int

void solve(){
    ll a, b;
    cin >> a >> b;


    if(b<a){
        swap(a,b);  
    }

    if(((a+b)%3)==0   &&  2*a>=b){
        cout << "YES" << endl;
    }
    else{
        cout << "NO" << endl;
    }
    
}


int main(){
    int t;
    cin >> t;

    while(t--){
        solve();
    }
}

