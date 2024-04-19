#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const int MX = 100;

int a[MX + 5][MX + 5];
int b[MX + 5][MX + 5];
int main(){
    int t; cin >> t;
    while(t--){
    int n,m; cin >> n >> m;
    for (int i = 1; i <= n; i++){
        for (int j = 1; j <= m; j++){
            cin >> a[i][j];
            b[i][j] = a[i][j];
        }
    }
    int c1 = 1, h1 = 1, c2 = m, h2 = n;
    while (c1 <= c2 && h1 <= h2){
        for (int i = h2; i >= h1; i--){
            if (i > h1){
                swap(b[i][c1], a[i-1][c1]);
            }
        }
        for (int i = c1; i <= c2; i++){
            if (i < c2){
                swap(b[h1][i], a[h1][i + 1]);
            }
        }
        for (int i = h1; i <= h2; i++){
            if (i < h2){
                swap(b[i][c2], a[i + 1][c2]);
            }
        }
        for (int i = c2; i >= c1; i--){
            if (i > c1){
                swap(b[h2][i], a[h2][i - 1]);
            }
        }
        c1++, h1++, c2--, h2--;
    }
    for (int i = 1; i <= n; i++){
        for (int j = 1; j <= m; j++){
            cout << a[i][j] << " ";
        }
    }
    cout << endl;
    }
}