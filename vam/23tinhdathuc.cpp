#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const int MOD = (int)1e9 + 7;
int main(){
    ios_base::sync_with_stdio(0); 
    cin.tie(NULL);cout.tie(NULL);
    int t;
    cin >> t;
    while(t--){
        int n, x; cin >> n >> x;
        int a[n];
        for (int i = 0; i < n; i++) cin >> a[i];
        ll res = 0, lt = 1;
        for (int i = n - 1; i >= 0; i--){
            res += a[i] * lt;
            res %= MOD;
            lt *= x;
            lt %= MOD;
        }
    cout << res << endl;
    }
}