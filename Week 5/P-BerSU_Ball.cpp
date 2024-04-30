#include<bits/stdc++.h>
using namespace std;
#define ll long long int

int main(){
    int t;                  
    cin>>t;

    while(t--){
        int n, m, ans=0;
        cin>>n;
        vector<int> a(n);

        for(int i=0; i<n; i++){
            cin >> a[i];
        }
        cin>>m;
        vector<int>b(m);

        for(int i=0; i<m; i++){
            cin >> b[i];
        }

        sort(a.begin(), a.end());
        sort(b.begin(), b.end());

        for(int i=0; i<n; i++){
            for (int j=0; j<m; j++){
                if(a[i]==b[j] || (a[i]+1)==b[j] || (a[i]-1)==b[j]){
                    ans++;
                    b[j]=-2;
                    break;
                }
            }
        }
        cout << ans << endl;
    }
}
