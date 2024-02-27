#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const int MOD = (int)1e9 + 7;

int prime_factorization(int n){
    for (int i = 2; i <= 3; i++){
        while(n % i == 0){
            n /= i;
        }
    }
    return n;
}

int main(){
    ios_base::sync_with_stdio(0); 
    cin.tie(NULL);cout.tie(NULL);
    int t; cin >> t;
    while(t--){
    int x,y; cin >> x >> y;
    if (prime_factorization(x) == prime_factorization(y)){
        cout << "YES\n";
    } else {
        cout << "NO\n";
    }

    }
}