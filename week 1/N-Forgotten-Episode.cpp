#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    vector<int> arr(n);

    int maxi = INT_MIN;
    for(int i=0; i<n-1; i++){
        cin >> arr[i];
        maxi = max(maxi, arr[i]);
    }
    
    vector<int> fq(maxi+2);

    for(int i=0; i<n; i++){
        fq[arr[i]]++;
    }

    for(int i=0; i<=fq.size(); i++){
        if(fq[i] == 0 ){
            cout << i << endl;
            return 0;
        }
    }

}