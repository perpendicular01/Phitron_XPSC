#include<bits/stdc++.h>
using namespace std;

int main(){
    long long a, b;
    cin >> a >> b;
    long long  ans =0;

    while(a<=b){
        ans++;
        a *= 2;
    }

    cout << ans << endl;
}