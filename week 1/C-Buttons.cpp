#include<bits/stdc++.h>
using namespace std;

int main(){
    int a, b;
    cin >> a >> b;

    int sum = 0;

    if(a>b){
        sum += a;
        a--;
    }
    else{
        sum += b;
        b--;
    }

    int maxi = max(a, b);

    cout << sum+maxi << endl;
}