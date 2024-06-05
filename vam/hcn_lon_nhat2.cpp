#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int dx[8] = {-1, 0, 1, -1, 1, -1, 0, 1};
int dy[8] = {-1, -1, -1, 0, 0, 1, 1, 1};

int a[505][505], n, m, res;
void Try(int i, int j, int sum){
    if(a[i][j] == 0){
        sum = 0;
    } else {
        res = max(res, sum);
    }
    for (int k = 0; k < 8; k++){
        int x1 = i + dx[k];
        int y1 = j + dy[k];
        if (x1 >= 1 && x1 <= m && y1 >= 1 && y1 <= n && a[x1][y1]){
            Try(x1, y1, sum + a[x1][y1]);
        }
    }
}
int main(){
    ios_base::sync_with_stdio(0); 
    cin.tie(NULL);cout.tie(NULL);
    int t; cin >> t;
    while(t--){
        memset(a, 0, sizeof(a));
        res = 0;
        cin >> n >> m;
        for (int i = 1; i <= n;i++){
            for (int j = 1; j <= m; j++){
                cin >> a[i][j];
            }
        }
        Try(1,1,a[1][1]);
        cout << res << endl;
    }
}