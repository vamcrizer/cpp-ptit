#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const int MOD = (int)1e9 + 7;
int X[100];
int n, k, s;
int ans = 0;

void Try(int i){
    for (int j = X[i - 1] + 1; j <= n - k + i; j++){
        X[i] = j;
        if (i == k){
            int sum = 0;
            for (int j = 1; j <= k; j++){
                sum += X[j];
            }
            if (sum == s){
                ans++;
            }
        } else {
        Try(i + 1);
        }
    }
}

int main(){
    while (1){
        ans = 0;
        cin >> n >> k >> s;
        if (n + k + s == 0){
            break;
        }
        Try(1);
        cout << ans << endl;
    }
}