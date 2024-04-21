#include <bits/stdc++.h>
using namespace std;
#define ll long long
const int N = 2e5 + 5;

int main()
{

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> a(n);
        unordered_map<ll, int> mp;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            mp[__lg(a[i])]++;
        }
    
        ll ans = 0;
        for (auto i : mp)
        {
            ll val = i.first;
            int cnt = i.second;

            ans += (1ll * cnt * (cnt - 1)) / 2;
        }
        cout << ans << endl;
    }
}