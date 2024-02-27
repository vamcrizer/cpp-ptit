#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
    int t; cin >> t;
    while (t--){
        string a; cin >> a;
        ll m; cin >> m;
        ll res = 0;
        for (auto x : a){
            res = res * 10 + x - '0';
            res %= m;
        }
        cout << res << endl;
    }
}