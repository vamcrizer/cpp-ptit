#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const int MOD = (int)1e9 + 7;
int n;
int a[100][100];
int ok = 0;
string s = "";
string path = "DLRU";
int dx[] = {1, 0, 0, -1};
int dy[] = {0, -1, 1, 0};

void Try(int i, int j){
    if (i == n && j == n){
        ok = 1;
        cout << s << " ";
    }
    for (int k = 0; k < 4; k++){
        int i1 = i + dx[k];
        int j1 = j + dy[k];
        if (i1 >= 1 && i1 <= n && j1 >= 1 && j1 <= n && a[i1][j1]){
            s += path[k];
            a[i1][j1] = 0;
            Try(i1, j1);
            a[i1][j1] = 1;
            s.pop_back();
        }
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