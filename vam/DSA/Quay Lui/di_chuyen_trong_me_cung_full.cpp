#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const int MOD = (int)1e9 + 7;
int n;
int a[100][100];
int ok = 0;
string s = "";

void Try(int i, int j){
    if (i == n && j == n){
        ok = 1;
        cout << s << " ";
    }
    if (i + 1 <= n && a[i + 1][j]){
        s += 'D';
        a[i + 1][j] = 0;
        Try(i + 1, j);
        a[i + 1][j] = 1;
        s.pop_back();
    }
    if (j - 1 >= 1 && a[i][j - 1]){
        s += 'L';
        a[i][j - 1] = 0;
        Try(i, j - 1);
        a[i][j - 1] = 1;
        s.pop_back();
    }
    if (j + 1 <= n && a[i][j + 1]){
        s += 'R';
        a[i][j + 1] = 0;
        Try(i, j + 1);
        a[i][j + 1] = 1;
        s.pop_back();
    }
    if (i - 1 >= 1 && a[i - 1][j]){
        s += 'U';
        a[i - 1][j] = 0;
        Try(i - 1, j);
        a[i - 1][j] = 1;
        s.pop_back();
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
        a[1][1] = 0;
        Try(1,1);
    }
    if (!ok){
        cout << -1;
    }
    cout << endl;
    }
}