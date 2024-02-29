#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int x, y, g;
void extended_gcd(int a, int b){
    if (b == 0){
        x = 1;
        y = 0;
        g = a;
    } else {
        extended_gcd(b, a % b);
        int tmp = x;
        x = y;
        y = tmp - a / b * y;
    }
}

int modular_inverse(int a, int m){
    
}

int main(){
    int t; cin >> t;
    while(t--){
    int a , b; cin >> a >> b;
    extended_gcd(a, b);
    cout << x << endl;
    }
}