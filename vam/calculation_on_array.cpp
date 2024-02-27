#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const int MOD = (int)1e9 + 7;

int main(){
    ios_base::sync_with_stdio(0); 
    cin.tie(NULL);cout.tie(NULL);
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        ll a[n]; for (auto &x : a) cin >> x;
        ll res = 1;
        for (auto x : a){
            res = res * x % MOD;
            res %= MOD;
        }
        ll gcd = 0;
        for (auto x : a){
            gcd = __gcd(gcd, x);
        }
        ll res2 = 1;
        res %= MOD;
        for (int i = 0; i < gcd; i++){
            res2 = res2 * res % MOD;
            res2 %= MOD;
        }
        cout << res2 << endl;
    }
}