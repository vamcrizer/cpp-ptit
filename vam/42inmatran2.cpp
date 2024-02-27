#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const int MOD = (int)(1e9 + 7);
int x[1000000] = {0};


int main(){
    ios_base::sync_with_stdio(0); 
    cin.tie(NULL);cout.tie(NULL);
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        int a[4*n][4*n];
        for (int i = 0; i < 4*n; i++){
            for (int j = 0; j < 4*n; j++){
                cin >> a[i][j];
            }
        }
        int q = 4*n / 2;
        for (int i = q; i >= 0; i--){
            cout << a[i][q - 1] << " ";
        }
        for (int i = q; i < 4*n; i++){
            cout << a[0][i] << " ";
        }
        for (int i = 1; i < 4*n; i++){
            cout << a[i][4*n-1] << " ";
        }
        cout << endl;
        for (int i = q - 1; i < 4*n; i++){
            cout << a[i][q] << " ";
        }
        for (int i = q - 1; i >= 0; i--){
            cout << a[4*n - 1][i] << " ";
        }
        for (int i = 4*n - 2; i >= 0; i--){
            cout << a[i][0] << " ";
        }
    }
}