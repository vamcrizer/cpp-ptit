#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const int MOD = (int)1e9 + 7;
int x[1000000] = {0};


void sinh(int X[], int n, int &ok){
    int i = n;
    while(i >= 1 && X[i] == 1){
        X[i] = 0;
        i--;
    }
    if (i == 0){
        ok = false;
    } else {
        X[i] = 1;
    }
}
int main(){
    int t; cin >> t;
    while(t--){
        int X[100] = {0};
        int ok = 1;
        int n; 
        cin >> n;
        while(ok){
        for (int i = 1; i <= n; i++){
            cout << X[i];
        }
        sinh(X, n, ok);
        cout << " ";
        }
        cout << endl;
    }
}