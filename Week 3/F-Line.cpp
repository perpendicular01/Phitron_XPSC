// https://codeforces.com/problemset/problem/1722/D

#include<bits/stdc++.h>
using namespace std;
#define ll long long 

int main(){
    int t;
    cin >> t;

    while(t--){
        ll n;
        cin >> n;

        string s;
        cin >> s;

        ll k=0, total=0;
        vector<ll> sum;

        for(int i=0; i<n; i++){
            int L = i;
            int R = n-i-1;

            if(s[i] == 'L'){
                if(R>L){
                    total += R;
                    k++;
                    sum.push_back(R-L);
                }
                else{
                    total += L;
                }
            }
            else{
                if(L>R){
                    total += L;
                    k++;
                    sum.push_back(L-R);
                }
                else{
                    total += R;
                }
            }
        } 

        vector<ll> ans(n+2);

        for(int i=k; i<=n; i++){
            ans[i] = total;
        }

        sort(sum.begin(), sum.end(), greater<ll>());

        for(int i=k-1; i>0; i--){
            total -= sum.back();
            sum.pop_back();
            ans[i] = total;
        }

        for(int i=1; i<=n; i++){
            cout << ans[i] << " ";
        }
        cout << endl;
        
    }
    return 0;
}