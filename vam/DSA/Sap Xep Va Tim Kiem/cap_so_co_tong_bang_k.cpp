#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
    int t; cin >> t;
    while(t--){
        int n, k; cin >> n >> k;
        int a[n];
        for (int i = 0; i < n; i++){
            cin >> a[i];
        }
        sort(a, a + n);
        int res = 0;
        for (int i = 0; i < n - 1; i++){
            auto it1 = lower_bound(a + i + 1, a + n, k - a[i]);
            auto ite10 = upper_bound(a + i + 1, a + n, k - a[i]);
            if (*it1 == k - a[i]){
            res += ite10 - it1;
            }
        }
        cout << res << endl;
    }
}