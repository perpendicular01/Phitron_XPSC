#include<bits/stdc++.h>
using namespace std;
#define ll long long int

int main(){
    int t;                  
    cin>>t;

    while(t--){
        ll a, b, n, sum, rem;
        cin >> a >> b >> n >> sum;
        
        ll countA = sum/n;  
    
        if(countA<=a){
            rem = sum-n*countA;
        }
        else{
            rem = sum-n*a;
        }
    
        if(rem <= b){
            cout << "YES" << endl;
        }
        else{
            cout << "NO" << endl;
        }
        
    }
}
