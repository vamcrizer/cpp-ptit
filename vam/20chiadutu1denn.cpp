#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main(){
    ios_base::sync_with_stdio(0); 
    cin.tie(NULL);cout.tie(NULL);
    int t; cin >> t;
    while(t--){
        ll n, k;
        cin >> n >> k;
    ll a = k - 1;
    ll b = n % k;
    ll ans;
    if(!k) ans = 0;
    else ans = a * (a + 1) / 2 * (n / k) + b * (b + 1) / 2;
    cout << ans << endl;
    }
}