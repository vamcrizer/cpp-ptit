#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const int MOD = (int)1e9 + 7;

int main(){
    ios_base::sync_with_stdio(0); 
    cin.tie(NULL);cout.tie(NULL);

        int m, n, k;
        cin >> m >> n >> k;
        k -= 1;
        int a[m][n];
        for (int i = 0; i < m; i++){
            for (int j = 0; j < n; j++){
                cin >> a[i][j];
            }
        }
        for (int i = 0; i < m; i++){
            for (int j = i + 1; j < m; j++){
                if (a[j][k] < a[i][k]){
                    int tmp = a[i][k];
                    a[i][k] = a[j][k];
                    a[j][k] = tmp;
                }
            }
        }
        for (int i = 0; i < m; i++){
            for (int j = 0; j < n; j++){
                cout << a[i][j] << " ";
            }
            cout << endl;

    }
}
