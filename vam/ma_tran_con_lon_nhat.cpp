#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const int MOD = (int)1e9 + 7;

int a[505][505], n, m;
int ps[505][505];
bool fix(int c){
    for (int i = 1; i <= n - c + 1; i++){
        for (int j = 1; j <= n - c + 1; j++){
            int x = i + c - 1;
            int y = j + c - 1;
            int tmp = ps[x][y] - ps[i - 1][y] - ps[x][j - 1] + ps[i - 1][j - 1];
            if (c * c == tmp){
                return true;
            }
        }
    }
    return false;
}
void pref(){
    for (int i = 1; i <= n; i++){
        for (int j = 1; j <= m; j++){
            ps[i][j] = ps[i - 1][j] + ps[i][j - 1] - ps[i - 1][j - 1] + a[i][j];
        }
    }
}

int main(){
    ios_base::sync_with_stdio(0); 
    cin.tie(NULL);cout.tie(NULL);
    int t; cin >> t;
    while(t--){
        memset(a, 0, sizeof(a));
        memset(ps, 0, sizeof(ps));
        cin >> n >> m;
        for (int i = 1; i <= n; i++){
            for (int j = 1; j <= m; j++){
                cin >> a[i][j];
            }
        }
        pref();
        int c = min(m,n);
        int res = 0;
        for (int k = c; k >= 1; k--){
            if (fix(k)){
            res = max(k, res);
            }
        }
        cout << res << endl;
    }
}