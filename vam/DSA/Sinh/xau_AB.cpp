#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const int MOD = (int)1e9 + 7;
int x[1000000] = {0};

void sinh(char X[], int n, int &ok){
    int i = n;
    while(i >= 1 && X[i] == 'B'){
        X[i] = 'A';
        i--;
    }
    if (i == 0){
        ok = 0;
    } else {
        X[i] = 'B';
    }
}

int main(){
    int t; cin >> t;
    while(t--){
        int ok = 1;
        int n; cin >> n;
        char X[15];
        for (int i = 1; i <= n; i++){
            X[i] = 'A';
        }
        while(ok){
            for (int i = 1; i <= n; i++){
                cout << X[i];
            }
            cout << " ";
            sinh(X, n, ok);
        }
        cout << endl;
    }
}