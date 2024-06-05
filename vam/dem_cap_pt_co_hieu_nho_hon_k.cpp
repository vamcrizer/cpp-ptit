#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const int MOD = (int)1e9 + 7;

int find(ll a[], int l, int r, int x){
    int res = -1;
    while(l <= r){
        int m = (l + r)/2;
        if (a[m] >= x){
            res = m;
            l = m + 1;
        } else {
            r = m - 1;
        }
    }
    return res;
}

int main(){
    ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int t; cin >> t;
    while(t--){
        int n, k;
         cin >> n >> k;
        ll a[n + 5];
    for (int i = 0; i < n; i++){
        cin >> a[i];
    }
    ll cnt = 0;
    sort(a, a+n);
    for (int i = 0; i < n; i++){
            auto it = lower_bound(a + i + 1, a + n, k + a[i]);
            cnt += 1ll*(it - (a + i) - 1);
        }
        cout << cnt << endl;
    }
}