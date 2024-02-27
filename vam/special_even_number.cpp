#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const int MOD = (int)1e9 + 7;

bool check(ll n){
    ll res = 0;
    while(n > 0){
        int digit = n % 10;
        if (digit % 2 != 0){
            return false;
        }
        res += digit;
        n /= 10;
    }
    return true;
}

int main(){
    ios_base::sync_with_stdio(0); 
    cin.tie(NULL);cout.tie(NULL);
    int t; cin >> t;
    while(t--){
        ll n; cin >> n;
        if (n % 2 == 0 && check(n)){
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }
    }
}