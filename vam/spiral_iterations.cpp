#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const int MOD = (int)1e9 + 7;

int main(){
    int t; cin >> t;
    while(t--){
    int m,n,x;
    cin >> m >> n;
    int a[m][n];
    for (int i = 0; i < m; i++){
        for (int j = 0 ; j < n; j++){
            cin >> a[i][j];
        }
    }
    int stt =0;
    int b[m * n + 5];
    int top = 0, bot = m - 1, left = 0, right = n - 1;
    while(stt < m*n){
        for (int i = left; i <= right; i++){
            b[stt++] = a[top][i];
        }
        top++;
        for (int i = top; i <= bot; i++){
            b[stt++] = a[i][right];
        }
        right--;
        for (int i = right; i >= left; i--){
            b[stt++] = a[bot][i];
        }
        bot--;
        for (int i = bot; i >= top; i--){
            b[stt++] = a[i][left];
        }
        left++;
    }
    for (int i = 0; i < m * n; i++){
        cout << b[i] << " ";
    }
    cout << endl;
    }
}