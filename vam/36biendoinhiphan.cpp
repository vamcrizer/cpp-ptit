#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const int MOD = (int)1e7;
int x[1000000] = {0};
int main(){
    int t; cin >> t;
    while(t--){
    int m, n; cin >> m >> n;
    int a[m + 5][n + 5], b[m + 5][n + 5];
    for (int i = 0; i < m; i++){
        for (int j = 0; j < n; j++){
            cin >> a[i][j];
            b[i][j] = a[i][j];
        }
    }
    for (int i = 0; i < m; i++){
        for (int j = 0; j < n; j++){
            if(a[i][j] == 1){
                for (int k = 0; k < m; k++){
                    b[k][j] = 1;
                }
                for (int k = 0; k < n; k++){
                    b[i][k] = 1;
                }
            }
        }
    }
    for (int i = 0; i < m; i++){
        for (int j = 0; j < n; j++){
            cout << b[i][j] << " ";
        }
        cout << endl;
    }
    }
}