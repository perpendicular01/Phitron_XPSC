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
        vector<ll> a(n);
        ll ans = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            ans = ans | a[i];
        }
        cout << ans << "\n";
    }
}