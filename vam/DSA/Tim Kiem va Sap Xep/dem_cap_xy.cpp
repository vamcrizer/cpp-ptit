#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const int MOD = (int)1e9 + 7;

int cnt[5] = {0};
int upper(int a[], int l, int r, int x){
    int res = -1;
    while(l <= r){
        int m = (l + r)/2;
        if (a[m] > x){
            res = m;
            r = m - 1;
        } else {
            l = m + 1;
        }
    }
    return res;
}

int dem(int a[], int m, int x){
    if (x == 0){
        return 0;
    } else if(x==1){
        return cnt[0];
    }
    int ans = cnt[0] + cnt[1];
    int z = upper(a, 0, m - 1, x);
    if (z != -1){
        ans += m - z;
    }
    if (x == 2){
        ans = ans - cnt[3] - cnt[4];
    }
    if (x == 3){
        ans += cnt[2];
    }
    return ans;
}

int main(){
    int t; cin >> t;
    while(t--){
        memset(cnt, 0, sizeof(cnt));
        int n,m; cin >> n >> m;
        int x[n], y[m];
        for (int i = 0; i < n; i++){
            cin >> x[i];
        }
        for (int i = 0; i < m; i++){
            cin >> y[i];
            if (y[i] <= 4){
                cnt[y[i]]++;
            }
        }
        sort(y, y + m);
        ll res = 0;
        for (int i = 0; i < n; i++){
            res += dem(y, m, x[i]);
        }
        cout << res << endl;
    }
}