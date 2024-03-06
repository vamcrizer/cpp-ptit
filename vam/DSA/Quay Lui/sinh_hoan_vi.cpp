#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const int MOD = (int)1e9 + 7;
int n, k;
int X[100];
int check[100];
void in(){
    for (int i = 1; i <= n; i++){
        cout << X[i] << " ";
    }
}
void Try(int i){
    for (int j = 1; j <= n; j++){
        if (check[j] == 0){
            X[i] = j;
            check[j] = 1;
            if (i == n){
                in();
                cout << endl;
            } else {
                Try(i + 1);
            }
            check[j] = 0;
        }
    }
}

int main(){
    cin >> n;
    memset(check, 0, sizeof(check));
    Try(1);
}