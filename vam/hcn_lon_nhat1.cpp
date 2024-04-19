#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const int MOD = (int)1e7;
int x[1000000] = {0};
const int MX = 20;
int a[MX + 5][MX + 5];
int main(){
    int t; cin >> t;
    while(t--){
        int m,n; cin>> m >>n;
        for (int i = 1; i <= m; i++){
            for (int j = 1; j <= n; j++){
                cin >> a[i][j];
            }
        }
        int cnt=0;
        for (int j = 1; j <= n;j++){
            int ok = 1;
            for (int i = 1; i <= m; i++){
                if (a[i][j] == 0){
                    ok = 0;
                    break;
                }
            }
            if (ok){
                cnt += m;
            }
        }
        cout << cnt << endl;
    }
}