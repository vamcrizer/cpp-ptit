#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const int MOD = (int)1e9 + 7;
int x[1000000] = {0};

int main(){
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        int a[n];
        for (auto &x : a) cin >> x;
        sort(a, a + n);
        int res = INT_MAX;
        for (int i = 0 ; i < n; i++){
            auto it = lower_bound(a + i, a + n, a[i]);
            if (abs(0 - (a[i] + a[it - a])) < res){
                res = a[i] + a[it - a];
            }
        }
        cout << res << endl;
    }
}
