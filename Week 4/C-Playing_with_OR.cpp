#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        vector<ll> a(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        int i = 0, j = 0;
        int oddCount = 0, ans = 0;
        while (i < n and j < n)
        {
            if (a[i] % 2 == 1)
            {
                oddCount++;
            }
            if (i - j + 1 == k)
            {
                if (oddCount)
                {
                    ans++;
                }
                if (a[j] % 2 == 1)
                {
                    oddCount--;
                }
                j++;
            }
            i++;
        }

        cout << ans << endl;
    }
}