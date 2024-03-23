#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    
    while(t--){
        int n;
        cin >> n;

        int arr[n+1];

        for(int i=0; i<n; i++){
            cin >> arr[i];
        }

        for(int i=0; i<n; i++){
            int a;
            cin >> a;
            string s;
            cin >> s;

            for(int j=0; j<a; j++){
                if(s[j] == 'D'){
                    if(arr[i] == 9){
                        arr[i] = 0;
                        continue;
                    }
                    arr[i] += 1;
                }

                else{
                    if(arr[i] == 0){
                        arr[i] = 9;
                        continue;
                    }
                    arr[i] -= 1;
                }
            }
        }

        for(int i=0; i<n; i++){
            cout << arr[i] << " ";
        }
        cout << endl;
    }
    
}