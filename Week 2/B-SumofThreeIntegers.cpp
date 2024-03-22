#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ll k, s;
    cin >> k >> s;

    ll ans = 0;

    for(int i=0; i<=k; i++){
        for(int j=0; j<=k; j++){
            ll a = s-i-j;

            if(a>=0  && a<=k){
                ans++;
            }
        }
    }
    cout << ans << endl;
}