#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const int MOD = (int)1e9 + 7;
int n, k;
int X[100];

void in(){
    for (int i = 1; i <= k; i++){
        cout << X[i] << " ";
    }
}
void Try(int i){
    for (int j = X[i - 1] + 1; j <= n - k + i; j++){
        X[i] = j;
        if (i == k){
            in();
            cout << endl;
        } else {
            Try(i + 1);
        }
    }
}

int main(){
    cin >> n >> k;
    Try(1);
}