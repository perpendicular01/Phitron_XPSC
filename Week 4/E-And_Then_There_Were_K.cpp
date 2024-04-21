#include <bits/stdc++.h>
using namespace std;
#define ll long long
const int N = 2e5 + 5;
vector<ll> poTwo;

void solve()
{
    int i = 0;
    while (1 << i <= N)
    {
        poTwo.push_back(1 << i);
        i++;
    }
}

int main()
{

    int t;
    cin >> t;
    solve();
    while (t--)
    {
        ll n;
        cin >> n;

        ll ans = INT_MIN;
        for (int i = 0; i < poTwo.size(); i++)
        {
            if (poTwo[i] <= n)
            {
                ans = max(ans, poTwo[i]);
            }
        }

        cout << ans - 1 << endl;
    }
}