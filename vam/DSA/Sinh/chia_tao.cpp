#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void sinh(int X[], int n, int &ok){
    int i = n;
    while(i >= 1 && X[i] == 1){
        X[i] = 0;
        i--;
    }
    if (i == 0){
        ok = 0;
    } else {
        X[i] = 1;
    }
}

int main(){
    int t; cin >> t;
    while(t--){
    int X[100] = {0};
    ll w[100];
    int n ; cin >> n;
    for (int i = 1; i <= n; i++){
        cin >> w[i];
    }
    ll ans = 1e18;
    int ok = 1;
    
    while(ok){
        ll sum1 = 0, sum2 = 0;
        for (int i = 1; i <= n; i++){
            if (X[i] == 1){
                sum2 += w[i];
            } else {
                sum1 += w[i];
            }
            ans = min(ans, abs(sum2 - sum1));
            sinh(X, n, ok);
        }
    }
    cout << ans << endl;
    }
}