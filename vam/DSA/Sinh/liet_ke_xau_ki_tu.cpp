#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const int MOD = (int)1e9 + 7;
char X[100];
int ok, n, k;
char c;

void ktao(){
    for (int i = 1; i <= k; i++){
        X[i] = 'A';
    }
}

void sinh(){
    int i = k;
     while(i >= 1 && X[i] == c){
        i--;
     }
     if (i == 0){
        ok = 0;
     } else {
        X[i]++;
        for (int j = i + 1; j <= k; j++){
            X[j] = X[i];
        }
     }
}


int main(){
    int t; cin >> t;
    while(t--){
    cin >> c >> k;
    n = c - 'A' + 1;
    ktao();
    ok = 1;
    while(ok){
        for (int i = 1 ; i <= k; i++){
            cout << X[i];
            }
            cout << endl;
        sinh();
        }
    }

}