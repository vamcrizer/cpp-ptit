#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const int MOD = (int)1e9 + 7;
int x[1000000] = {0};

ll powMod(ll a, ll b, ll c){
    ll res = 1;
    while(b){
        if (b % 2 == 1){
            res *= a;
            res %= c;
        }
        a *= a;
        a %= c;
        b /= 2;
    }
    return res;
}

int main(){
    int t; cin  >> t;
    while(t--){
    ll a, b, c; cin >> a >> b >> c;
    cout << powmod(a , b , c) << endl;
    }
}