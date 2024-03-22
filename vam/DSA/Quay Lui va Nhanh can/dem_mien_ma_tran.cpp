#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const int MOD = (int)1e9 + 7;
int n;
int a[100][100];
int dx[] = {1, 0, 0, -1};
int dy[] = {0, -1, 1, 0};

void Try(int i, int j){
    a[i][j] = 0;
    for (int k = 0; k < 4; k++){
        int i1 = i + dx[k];
        int j1 = j + dy[k];
        if (i1 >= 1 && i1 <= n && j1 >= 1 && j1 <= n && a[i1][j1]){
            Try(i1, j1);
        }
    }
}
int main(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    int t; cin >> t;
    while(t--){
    cin >> n;
    for (int i = 1; i <= n; i++){
        for (int j = 1; j <= n; j++){
            cin >> a[i][j];
        }
    }
    int cnt = 0;
    for (int i = 1; i <= n; i++){
        for (int j = 1; j <= n; j++){
            if (a[i][j]){
                cnt++;
                Try(i, j);
            }
        }
    }
    cout << cnt << endl;
    }

}