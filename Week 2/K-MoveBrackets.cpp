#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;

    while(t--){
        int n;
        cin >> n;

        string a;
        cin >> a;

        int res = 0;
        int count = 0;

        for(int i=0; i<n; i++){
            
            if(a[i]=='('){
                count++;
            }

            else{
                if(count > 0)
                    count--;
                else
                res++;
        
            }
        }
        
        cout << res << endl;
    }
}