#include<bits/stdc++.h>
using namespace std;
#define ll long long

void solve(){
    int n, x;
    cin >> n >> x;

    vector<pair<ll,int>> arr(n);

    for(int i=0; i<n; i++){
        int a;
        cin >> a;
        arr[i] = {a, i+1};
    }

    sort(arr.begin(), arr.end());
    
    int m;

    for(int i=0; i<n; i++){

        m = x-arr[i].first;     
        int r = n-1;
        
        for(int j=i+1; j<r; j++){
            
            while(j+1<n-1   &&   arr[j].first+arr[r].first>m){
                r--;
            }

            if(arr[j].first+arr[r].first == m){
                cout << arr[i].second << " " << arr[j].second << " " << arr[r].second << endl;
                return;
            }
        }
    }

    cout << "IMPOSSIBLE" << endl;

    
}


int main(){
  //  int t;
  //  cin >> t;

  //  while(t--){
        solve();
  //  }
}