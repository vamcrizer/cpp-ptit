#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const int MOD = (int)1e9 + 7;
int x[1000000] = {0};

int main(){
    int t; cin >> t;
    while(t--){
        int m,n; cin >> m >> n;
        ll a[m], b[n];
        for (auto &x : a) cin >> x;
        for (auto &x : b) cin >> x;
        ll res = *min_element(b, b + n) * *max_element(a, a + n);
        cout << res << endl;
    }
}