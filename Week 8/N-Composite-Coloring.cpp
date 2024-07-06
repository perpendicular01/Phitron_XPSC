#include<bits/stdc++.h>
using namespace std;
#define ll long long

void solve(){
    int n;
    cin >> n;

    vector<int> arr(n);
    vector<int> prime = {2, 3, 5, 7, 11, 13, 17, 19, 23, 29, 31};
    vector<int> co(12, -1);
    int count=1;

    for(int i=0; i<n; i++){
        int a;
        cin >> a;

        for(int j=0; j<11; j++){
            if(a%prime[j] == 0){
                
                if(co[j] == -1){
                    co[j]=count;
                    count++;
                }

                arr[i] = co[j];
                break;
            }
        }
    }

    cout << count-1 << endl;

    for(auto it: arr){
        cout << it << " ";
    }
    cout << endl;
    
}

int main(){
    int t;
    cin >> t;
    
    while(t--){
        solve();
    }
    
}
