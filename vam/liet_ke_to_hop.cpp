#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const int MOD = (int)1e9 + 7;
int x[1000000] = {0};

void sinh(int X[], int n, int k, int &ok){
    int i = k;
    while(i >= 1 && X[i] == n - k + i){
        i--;
    }
    if (i == 0){
        ok = 0;
    } else {
        X[i]++;
        for (int j = i + 1; j <= k; j++){
            X[j] = X[j - 1] + 1;
        }
    }
}


int main(){
    int t; cin >> t;
    while(t--){
        int ok = 1;
        int n, k; cin >> n >> k;
        int X[100];
        for (int i = 1; i <= k; i++){
            X[i] = i;
        }
        while(ok){
            for (int i = 1; i <= k; i++){
                cout << X[i];
            }
            sinh(X, n, k ,ok);
        cout << " ";
        }
        cout << endl;
    }
}