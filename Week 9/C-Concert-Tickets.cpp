#include<bits/stdc++.h>
using namespace std;
#define ll long long int

void solve(){
    int n, m;
    cin >> n >> m;

    multiset<int, greater<int>> arr;
    vector<ll> b(m);
    
    for(int i=0; i<n; i++){
        int a;
        cin >> a;
        arr.insert(a); 
    }

    for(int i=0; i<m; i++){
        cin >> b[i];
    }
  
    for(int i=0; i<m; i++){
        auto it = arr.lower_bound(b[i]);

        if(it == arr.end()){
            cout << -1 << endl;
        }
        else{
            cout << *it << endl;
            arr.erase(it);
        }
    }

}


int main(){
  //  int t;
  //  cin >> t;

  //  while(t--){
        solve();
  //  }
}

