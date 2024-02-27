#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const int MOD = (int)1e7;
int x[1000000] = {0};

ll lcm(ll a, ll b){
    return a / __gcd(a, b) * b;
}

int main(){
    int t; cin >> t;
    ios_base::sync_with_stdio(0); 
    cin.tie(NULL);cout.tie(NULL);
    while(t--){
        int x, y, z, n;
        cin >> x >> y >> z >> n;
        ll bcnn = lcm(x,(lcm(y,z)));
        ll num = pow(10, n - 1);
        ll res = (num + bcnn - 1) / bcnn * bcnn;
        if (res < pow(10, n)){
            cout << res << endl;
        } else {
            cout << -1 << endl;
        }
    }
}