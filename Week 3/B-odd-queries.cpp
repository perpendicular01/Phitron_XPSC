#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;

    while(t--){
        int n, q;
        cin >> n >> q;

        vector<int> a(n), b(n);
        int sum = 0;

        for(int i=1; i<=n; i++){
            cin >> a[i];
        }
        
        for(int i=1; i<=n; i++){
            sum+=a[i];
            b[i] = sum;
        }

        long long flag = accumulate(a.begin(), a.end(), 0);

        while(q--){
            long long sum1 = flag;
            long long l, r, k;
            cin >> l >> r >> k;

            sum1 -= b[r]-b[l-1];
            sum1 += (r-l+1)*k;

            if(sum1%2!=0){
                cout << "YES" << endl;
            }
            else{
                cout << "NO" << endl;
            }
        }
    }
}