#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const int MOD = (int)1e9 + 7;

ll check(ll n){
    int sum = 0;
    while(n > 0){
        sum += n % 10;
        n /= 10;
    }
    n = sum;
    if (n < 10){
        return n;
    } else {
        return check(n);
    }
}

int main(){
    ios_base::sync_with_stdio(0);  
    cin.tie(NULL);cout.tie(NULL);
    int t; cin >> t;
    while(t--){
        ll n; cin >> n;
        cout << check(n) << endl;
    }
}
