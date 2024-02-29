#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main(){
    int t; cin >> t;
    while(t--){
    ll a, b; cin >> a >> b;
    ll gcd = __gcd(a, b);
    ll lcm = a / gcd * b;
    cout  << lcm << " " << gcd  << endl;
    }
}