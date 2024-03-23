#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;

    while(t--){
        int n;
        cin >> n;
        string s;
        cin >> s;

        sort(s.begin(), s.end());

        if(s == "Timru"){
            cout << "Yes" << endl;
        }
        else{
            cout << "No" << endl;
        }
    }
    
    
}
