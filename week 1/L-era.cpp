#include<bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    int t;
    cin >> t;

    while(t--){
        int n;
        cin >> n;

        vector<ll> arr(n+1);
        for(int i=1; i<=n; i++){
            cin >> arr[i];
        }

        ll ans = 0;
        ll added = 0;
        for(int i=1; i<=n; i++){
            if(arr[i]> (i+added)){
                ans += arr[i]-i-added;
                added = ans;
            }
        }
        cout << ans << endl;
    }
}