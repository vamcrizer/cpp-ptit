#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const int MOD = (int)1e9 + 7;

int main(){
    int n, k, b; cin >> n >> k >> b;
    int a[n];
    memset(a, 0, sizeof(a));
    for (int i = 1; i <= b; i++){
        int x; cin >> x;
        a[x - 1] = 1;
    }
    int res = -1;
    for (int i = 0; i <= n - k + 1; i++){
        int cnt = 0;
        for (int j = i; j <= i + k - 1; j++){
            if (a[j] == 1){
                cnt++;
            }
        }
        if (res == -1){
            res = cnt;
        }
        if (cnt < res){
            res = cnt;
        }
    }
    if (res == -1){
        cout << 0;
    } else {
        cout << res;
    }
}