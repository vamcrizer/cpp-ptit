#include <bits/stdc++.h>
using namespace std;
using ll = long long;

bool check(int a[], int n, int l, int h){
    ll res = 0;
    for (int i = 0; i < n; i++){
        if (h >= a[i]){
            res += h - a[i];
        }
    }
    return res >= l;
}

int main(){
    ios_base::sync_with_stdio(0); 
    cin.tie(NULL);cout.tie(NULL);
    int n, l; cin >> n >> l;
    int a[n];
    for (auto &x : a) cin >> x;
    ll l = 0, r= 1e18;
    ll res = -1;
    while(l <= r){
        ll m = (l+r)/2;
        if (check(a,n,l,m)){
            res = m;
            l = m + 1;
        } else {
            r = m - 1;
        }
    }
    cout << res;
}