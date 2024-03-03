#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const int MOD = (int)1e9 + 7;


int main(){
    int t; cin >> t;
    while(t--){
        int x[45] = {0};
        int n, k; cin >> n >> k;
        int res = -1;
        int a[45];
        for (int i = 1; i <= k; i++){
            cin >> a[i];
            x[a[i]]++;
        }
        int i = k;
        while (i >= 1 && a[i] == n - k + i){
            i--;
        }
        if (i == 0){
            res = k;
        } else {
            a[i]++;
            for (int j = i + 1; j <= k; j++){
                a[j] = a[j - 1] + 1;
            }
        }
        int cnt = 0;
        for (int z = 1; z <= k; z++){
            if (x[a[z]] == 0){
                cnt++;
            }
        }
        if (res != -1){
            cout << res << endl;
        } else {
        cout << cnt << endl;
        }
    }
}