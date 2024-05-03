#include <bits/stdc++.h>
using namespace std;
using ll = long long;

bool check(ll x, ll t, ll a[], ll n){
    ll res = 0;
    for (int i = 0; i < n; i++){
        res += x / a[i];
    }
    return res >= t;
}

int main(){
    ios_base::sync_with_stdio(0); 
    cin.tie(NULL);cout.tie(NULL);
    ll n,t; cin >> n >> t;
    ll a[n];
    for (auto &x : a) cin >> x;
    ll l = 0, r = 1e18;
    ll res = -1;
    while(l <= r){
        ll m = (l + r)/2;
        if (check(m,t,a,n)){
            res = m;
            r = m - 1;
        } else {
            l = m + 1;
        }
    }
    cout << res;
}