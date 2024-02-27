#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const int MOD = (int)1e9 + 7;

int main(){
    ll a, b, c, d; cin >> a >> b >> c >> d;
    ll n1 = abs(a-b), n2 = abs(b-c), n3 = abs(c-d), n4 = abs(d-a);
    ll res = __gcd(n1,n2);
    res = __gcd(res, n3);
    res = __gcd(res, n4);
    cout << res << endl;
}