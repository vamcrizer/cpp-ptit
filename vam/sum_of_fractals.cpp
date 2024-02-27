#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const int MOD = (int)1e7;
int x[1000000] = {0};
ll factorial(ll n){
    ll res = 1;
    for (int i = 1; i <= n; i++){
        res *= i;
    }
    return res;
}
int main(){
    int t; cin >> t;
    ios_base::sync_with_stdio(0); 
    cin.tie(NULL);cout.tie(NULL);
    while(t--){
        int n; cin >> n;
        ll res = 0;
        for (ll i = 1; i <= n; i++){
            res += factorial(i);
        }
        cout << res << endl;
    }
}
