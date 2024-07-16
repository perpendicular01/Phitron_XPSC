#include<bits/stdc++.h>
using namespace std;
#define ll long long int

void solve(){
    string s, ss, ans;
    cin >> s;

    unordered_map<char, int> mp;

    for(int i=0; i<s.length(); i++){
        mp[s[i]]++;
    }

    int count=0, t;
    char ch;

    for(auto it: mp){
        if(it.second%2 != 0){
            t = it.second;
            ch = it.first;
            count++;

            if(count > 1){
                cout << "NO SOLUTION" << endl;
                return;
            }
        }
    }

    for(auto it: mp){
        if(it.second%2 == 0){
            ss.append(it.second/2, it.first);
        }
    }

    ans = ss;
    reverse(ans.begin(), ans.end());

    if(count != 0){
        ss.append(t, ch);
    }
    ss.append(ans);

    cout << ss << endl;  
}


int main(){
  //  int t;
  //  cin >> t;

  //  while(t--){
        solve();
  //  }
}

