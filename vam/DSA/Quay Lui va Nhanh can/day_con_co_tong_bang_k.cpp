#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const int MOD = (int)1e9 + 7;
int n, k;
int X[100];
int check[100];
int sum = 0;
int a[1000];
void Try(int i, int pos){
    for (int j = pos; j <= n; j++){
        X[i] = a[j];
        sum += a[j];
        if (sum == k){
            for (int l = 1; l <= i; l++){
                cout << X[l] << " ";
            }
            cout << endl;
        } else {
            Try(i + 1, j + 1);
        }
        sum -= a[j];
    }
}

int main(){
    cin >> n >> k;
    for (int i = 1; i <= n; i++){
        cin >> a[i];
    }
    Try(1, 1);
}