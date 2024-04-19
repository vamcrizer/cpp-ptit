#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
    int n; cin >> n;
    int a[n];
    for (int i = 1; i<= n; i++){
        cin >> a[i];
    }
    sort(a + 1, a + n + 1);
    ll t = 1, res = 0;
    for (int i = 1; i <= n; i++){
        if (a[i] == a[i + 1]){
            t++;
        } else {
            res =  res + 1ll * t*(t-1)/2;
            t = 1;
        }
    }
    cout << res;
}