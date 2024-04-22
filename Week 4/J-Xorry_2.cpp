#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    ll t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;
        int a = 1;
        int b = 0;
        int count = 0;
        while (a * 2 <= n)
        {
            a *= 2;
            count++;
        }
        int ans = 1;
        bool flag = false;
        for (int i = count - 1; i >= 0; i--)
        {
            if (n & (1 << i))
            {
                b = b | (1 << i);
                flag = true;
            }
            else
            {
                if (flag)
                {
                    ans *= 2;
                }
            }
        }
        cout << ans << endl;
    }
}