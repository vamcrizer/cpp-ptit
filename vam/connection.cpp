#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const int MOD = (int)1e9 + 7;

int dong_du_luy_thua(ll a, ll b, ll c){
    ll res = 1;
    a %= c;
    for (int i = 1; i <= b; i++){
        res *= a;
        res %= c;
    }
    return res;
}

ll tophop(ll k, ll n){
    ll res = 1;
    for (int i = 0; i < k; i++){
        res = (res * (n - i) % MOD * power(i + 1, MOD - 2));
    }
    return res;
}

int main(){
    ll n; cin >> n;
    cout << tophop(n-1, 2*n - 2) * power(n, MOD - 2) % MOD;
}
