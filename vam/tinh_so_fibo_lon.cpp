#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const int MOD = (int)1e9 + 7;
ll fibo(int n){
    ll f[n + 1];
    f[0] = 0, f[1] = 1;
    for (int i = 2; i <= n; i++){
        f[i] = f[i - 1] + f[i - 2];
        f[i] %= MOD;
    }
    return f[n] %= MOD;
}

int main(){
    int t; cin >> t;
    while(t--){
        int n ; cin >> n;
        cout << fibo(n);
        cout << endl;
    }
}