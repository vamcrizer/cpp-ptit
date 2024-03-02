#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const int MOD = (int)1e9 + 7;
int x[1000000] = {0};

int main(){
    int t; cin >> t;
    while(t--){
        int a, b, m;
        cin >> a >> b >> m;
        ll res = 1;
        for (int i = 1; i <= b; i++){
            res = res * a % m;
            res %= m;
        }
        cout << res << endl;
    }
}