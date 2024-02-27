#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const int MOD = (int)1e7;
int x[1000000] = {0};
int main(){
    int t; cin >> t;
    ios_base::sync_with_stdio(0); 
    cin.tie(NULL);cout.tie(NULL);
    while(t--){
    int n; cin >> n;
    int a[n][n];
    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            cin >> a[i][j];
        }
    }
    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            if (i == 0 || j == 0 || i == n - 1 || j == n - 1){
                cout << a[i][j];
                if (j != n - 1){
                    cout << " ";
                }
            } else {
                cout << "  ";
            }
        }
        cout << endl;
    }
    }
}