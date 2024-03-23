#include<bits/stdc++.h>
using namespace std;

int same(string s1, string s2){
    int n = s1.size();

    int ans = 0;

    for(int i=0; i<n; i++){
        ans += abs(s1[i]-s2[i]);
    }
    return ans;
}


int main(){
    int t;
    cin >> t;

    while(t--){
        int n, m;
        cin >> n >> m;

        vector<string> s(n+1);

        for(int i=0; i<n; i++){
            cin >> s[i];
        }

        int res = INT_MAX;

        for(int i=0; i<n; i++){
            for(int j=i+1; j<n; j++){
                
                res  = min(res, same(s[i], s[j]));
            }
        }

        cout << res << endl;
    }
    
    
}
