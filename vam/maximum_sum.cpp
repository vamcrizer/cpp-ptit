#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
    int m,n; cin >> m >>n;
    int a[m], b[n];
    for (auto &x : a) cin >> x;
    for (auto &x : b) cin >> x;
    int pA[m], pB[n];
    pA[0] = a[0], pB[0] = b[0];
    for (int i = 1; i < m; i++){
        pA[i] = pA[i - 1] + a[i];
        }
    for (int i = 1; i < n; i++){
        pB[i] = pB[i - 1] + b[i];
        }
    
    int res = 0;
    for (int i = 0; i < m; i++){ //loop in a first
    int tmp = pA[i];
        auto it = upper_bound(b, b + n, tmp);
        tmp += pB[n - 1] - pB[it - b - 1];
        if(tmp > res){
            res = tmp;
        }
    }
    for (int i = 0; i < n; i++){ //loop in b after
    int tmp = pB[i];
        auto it = upper_bound(a, a + m, tmp);
        tmp += pA[m - 1] - pA[it - a - 1];
        if(tmp > res){
            res = tmp;
        }
    }
    cout << res << endl;
}