//https://codeforces.com/problemset/problem/805/B

#include<bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin >> n;

    string s[] = {"a", "a", "b", "b"};
    int j=0;

    for(int i=0; i<n; i++){
        cout << s[j];
        j++;
        if(j==4){
            j=0;
        }
    }


}

int main(){
    solve();
}
    
