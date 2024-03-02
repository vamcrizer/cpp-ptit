#include <bits/stdc++.h>
using namespace std;
using ll = long long;


ll lcm(ll a, ll b){
    return a / __gcd(a,b) * b;
}

int main(){
    int t;
    cin >> t;
    while(t--){
    ll n;
    cin >> n;
    ll res = 1;
    for (ll i = 1; i <= n; i++){
        res = lcm(i, res);
    }
    cout << res << endl;
    }
}