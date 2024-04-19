#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int> a(n);

        int totalXor = 0;
        for(int i=0 ; i<n ; i++){
            cin >> a[i];
            totalXor = totalXor^a[i];
        }

        int minXor = totalXor;
        for(int i=0 ; i<n ; i++){
            minXor = min(minXor, a[i]^totalXor);
        }

        cout << minXor << "\n";
    }
}