#include <bits/stdc++.h>
using namespace std;
using ll = long long;


int lcm(int a, int b){
    return a / __gcd(a,b) * b;
}

int main(){
    int t;
    cin >> t;
    while(t--){
    int n;
    cin >> n;
    int res = 1;
    for (int i = 1; i <= n; i++){
        res = lcm(i, res);
    }
    cout << res << endl;
    }
}