#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int m, n;
int dx[4] = {-1, 0, 1, 0};
int dy[4] = {0, 1, 0, -1};
int a[1005][1005];

void QL(int i, int j){
    a[i][j] = 0;
    for (int k = 0; k < 4; k++){
        int i1 = i + dx[k];
        int j1 = j + dy[k];
        if (i1 >= 1 && i1 <= m && j1 >= 1 && j1 <= n && a[i1][j1]){
            QL(i1,j1);
        }
    }
}

int main(){
    ios_base::sync_with_stdio(0); 
    cin.tie(NULL);cout.tie(NULL);
    cin >> m >> n;
    for (int i = 1; i <= m; i++){
        for (int j = 1; j <= n; j++){
            cin >> a[i][j];
        }
    }
    int cnt = 0;
    for (int i = 1; i <= m; i++){
        for (int j = 1; j <= n; j++){
            if (a[i][j]){
                cnt++;
                QL(i,j);
            }
        }
    }
    cout << cnt << endl;
}