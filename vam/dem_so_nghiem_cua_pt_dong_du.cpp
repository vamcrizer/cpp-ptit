#include <bits/stdc++.h>
using namespace std;
using ll = long long;

bool prime(int n){
    for (int i = 2; i <= sqrt(n); i++){
        if (n % i == 0){
            return false;
        }
    }
    return n > 1;
}

int main(){
    int t; cin >> t;
    while(t--){
    int b, p;
    cin >> b >> p;
    int cnt = 0;
    b = sqrt(b);
    for (int i = 1; i <= b + 1; i++){
        if (prime(i) && i*i*i*i % p == 1){
            cnt++;
        }
    }
    cout << cnt << endl;
    }
}