#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const int MOD = (int)1e9 + 7;
// 2^(p-1) * 2^p - 1 -> hoàn hảo
int primecheck(int n){
    for (int i = 2; i <= sqrt(n); i++){
        if (n % i == 0){
            return 0;
        }
    }
    return n > 1;
}
ll hoanhao[10];
int cnt = 0;
int main(){
    int t; cin >> t;
    while(t--){
    ll n;
    cin >> n;
    int ok = 0;
    for (int p = 2; p <= 32; p++){
        if (primecheck(p)){
            int temp = (int)pow(2, p) - 1;
            if (primecheck(temp)){
                hoanhao[cnt] = 1ll* (int)pow(2, p - 1) * temp;
                cnt++;
            }
        }
    }
    
    for (int i = 0; i < cnt; i++){
        if (hoanhao[i] == n){
            cout << 1;
            ok = 1;
            break;
        }
    }
    if (!ok){
        cout << 0;
    }
    cout << endl;
    }
}