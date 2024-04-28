#include <bits/stdc++.h>
using namespace std;
using ll = long long;


int main(){
    int t; cin >> t;
    while(t--){
        int n, k; cin >> n >> k;
        int a[n];
        for (auto &x : a) cin >> x;
        sort(a, a + n);
        int ans = 0;
        for (int i = 0; i < n - 1; i++){
            auto it = upper_bound(a + i + 1, a + n, k - a[i]);
            ans += (a + n) - it;
        }
        cout << ans << endl;
    }
}