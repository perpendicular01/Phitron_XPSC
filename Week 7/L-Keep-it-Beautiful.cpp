// https://codeforces.com/problemset/problem/1841/B

#include<bits/stdc++.h>
using namespace std;

void solve(){
    int q;
    cin >> q;

    vector<int> taken;
    string ans="";
    bool flag = false;

    for(int i=0; i<q; i++){
        int a;
        cin >> a;

        if(taken.empty()){
            taken.push_back(a);
            ans.push_back('1');
        }

        else{
            if(flag){
                if(a < taken.back()){
                    ans.push_back('0');
                }
                
                else{
                    if(a > taken[0]){
                        ans.push_back('0');
                    }
                    else{
                        ans.push_back('1');
                        taken.push_back(a);
                    }
                }

            }

            else{
                if(a >= taken.back()){
                    taken.push_back(a);
                    ans.push_back('1');
                }

                else{
                    if(a > taken[0]){
                        ans.push_back('0');
                    }
                    else{
                        flag = true;
                        taken.push_back(a);
                        ans.push_back('1');
                    }
                }
            }
        }


    }

    for(auto it: ans){
        cout << it;
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