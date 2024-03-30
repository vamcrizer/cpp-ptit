#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const int MOD = (int)1e9 + 7;
int n;
int a[100][100];
int ok = 0;
string s = "";

void Try(int i, int j, string s){
    if (i == n && j == n){
        ok = 1;
        cout << s << " ";
    }
    if (i + 1 <= n  && a[i + 1][j] == 1){
        Try(i + 1, j, s + "D");

    }
    if (j - 1 >= 1 && a[i][j - 1] == 1){
        Try(i, j - 1, s + "L");
    }
    if (j + 1 <= n && a[i][j + 1] == 1){
        Try(i , j + 1, s + "R");

    }
    if (i - 1 >= 1 && a[i - 1][j] == 1){
        Try(i - 1, j, s + "U");

    }
}


int main(){
    int t; cin >> t;
    while(t--){
    ok = 0;
    cin >> n;
    for (int i = 1; i <= n; i++){
        for (int j = 1; j <= n; j++){
            cin >> a[i][j];
        }
    }
    if (a[1][1] && a[n][n]){
        Try(1,1,"");
    }
    if (!ok){
        cout << -1;
    }
    cout << endl;
    }
}