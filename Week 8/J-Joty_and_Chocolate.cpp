#include<bits/stdc++.h>
using namespace std;
#define ll long long

ll gcd(ll a, ll b){
    return __gcd(a, b);
}

ll lcm(ll a, ll b){
    return((a/gcd(a,b))*b);
}

int main(){
    ll n, a, b, p, q;
    ll res = 0, flag;

    cin >> n >> a >> b >> p >> q;

    res += ((n/a)*p);
    res += ((n/b)*q);
    flag = (n/lcm(a,b));
    res -= (flag*(p+q));
    res += (flag*max(p,q));

    cout << res << endl;
}