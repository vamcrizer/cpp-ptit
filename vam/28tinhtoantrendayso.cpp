#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const int MOD = (int)(1e9 + 7);
int x[1000000] = {0};


int main(){
    ios_base::sync_with_stdio(0); 
    cin.tie(NULL);cout.tie(NULL);
    int t; cin >> t;
    while(t--){
    int n; cin >> n;
    int a[n];
    for (int &x : a){
        cin >> x;
    }
    int gcd=0;
    for (int i = 0; i < n; i++){
        gcd = __gcd(gcd, a[i]);
    }
    ll res = 1;
    for (int i = 0; i < n; i++){
        res = res * a[i] % MOD;
        res %= MOD;

    }
    ll res2 = 1;
    for (int i = 1; i <= gcd; i++){
        res2 *= res % MOD;
        res2 %= MOD;
    }
    cout << res2 << endl;
    }
}