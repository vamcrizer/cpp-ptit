#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const int MOD = (int)1e9 + 7;

int a[205][205], ps[205][205], n, m, res; 

void input(){
    res = 0;
    memset(a, 0, sizeof(a));
    memset(ps, 0 , sizeof(ps));
    for (int i = 1; i <= n; i++){
        for (int j = 1; j <= m; j++){
            cin >> a[i][j];
        }
    }
}

void pref(){
    for (int i = 1; i <= n; i++){
        for (int j = 1; j <= m; j++){
            ps[i][j] = ps[i - 1][j] + ps[i][j - 1] - ps[i - 1][j - 1] + a[i][j];
        }
    }
}

void result(){
    for (int i = 1; i <= n; i++){
        for (int j = 1; j <= m; j++){
            for (int x = i; x <= n; x++){
                for (int y = j; y <= m; y++){
                    int tmp = ps[x][y] - ps[i - 1][y] - ps[x][j - 1] + ps[i - 1][j - 1];
                    res = max(tmp, res);
                }
            }
        }
    }
    cout << res << endl;
}

int main(){
    ios_base::sync_with_stdio(0); 
    cin.tie(NULL);cout.tie(NULL);
    int t; cin >> t;
    while(t--){
        cin >> n >> m;
        input();
        pref();
        result(); 
    }
}