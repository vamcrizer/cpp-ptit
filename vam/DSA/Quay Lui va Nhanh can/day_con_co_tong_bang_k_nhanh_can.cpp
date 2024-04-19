#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const int MOD = (int)1e9 + 7;
int n, k;
int X[100];
int check[100];
int sum = 0;
int a[1000];
void Try(int sum, int i, int pos){
    for (int j = pos; j <= n; j++){
        if (sum += a[j] <= k){
            X[i] = a[j];
            Try(sum + a[j], i + 1, j + 1);
        }
    }
}

int main(){
    cin >> n >> k;
    for (int i = 1; i <= n; i++){
        cin >> a[i];
    }
    Try(0, 1, 1);
}