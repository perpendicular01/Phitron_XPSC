// https://codeforces.com/problemset/problem/1907/B

#include<bits/stdc++.h>
using namespace std;

void solve(){
    string s;
    cin >> s;

    int n = s.length();

    vector<int> small, cap;
    vector<bool> done(n+1, true);

    for(int i=0; i<n; i++){
        if(s[i] == 'B'){
            if(!cap.empty()){
                done[cap.back()] = false;
                cap.pop_back();
            }
            done[i] = false;
        }

        else if(s[i] == 'b'){
            if(!small.empty()){
                done[small.back()] = false;
                small.pop_back();
            }
            done[i] = false;

        }
        
        else if(s[i]>='A' && s[i]<='Z'){
            cap.push_back(i);
        }
        else{
            small.push_back(i);
        }
    }

    for(int i=0; i<n; i++){
        if(done[i]){
            cout << s[i];
        }
    }

    cout << endl;
    
}

int main(){
    int t;
    cin >> t;

    while(t--){
        solve();
    }
}