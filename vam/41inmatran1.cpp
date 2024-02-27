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
        int a[n][n];
        for (int i = 0; i < n; i++){
            for (int j = 0; j < n; j++){
                cin >> a[i][j];
            }
        }
        for (int i = 0; i < n; i++){
                if (i % 2 == 0){
                    for (int k = 0; k < n; k++){
                        cout << a[i][k] << " ";
                    }
                } else {
                    for (int k = n - 1; k >= 0; k--){
                        cout << a[i][k] << " ";
                    }
                }
        }
        cout << endl;
    }
}