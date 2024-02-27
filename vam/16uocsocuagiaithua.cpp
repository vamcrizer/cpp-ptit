#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int degree(int n, int k){
    int res = 0;
    for (int i = k; i <= n; i *= k){
        res += n / i;
    }
    return res;
}

int main(){
    int t; cin >> t;
    while(t--){
        int n, k;
        cin >> n >> k;
        cout << degree(n, k) << endl;
    }
}