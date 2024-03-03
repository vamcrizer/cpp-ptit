#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const int MOD = (int)1e9 + 7;
int x[1000000] = {0};


int main(){
    int t; cin >> t;
    while(t--){
        int ok = 1;
        int n, k; cin >> n >> k;
        int a[n + 5][n + 5];
        for (int i = 1; i <= n; i++){
            for (int j = 1; j <= n; j++){
                cin >> a[i][j];
            }
        }
        int X[n + 5];
        for (int i = 1; i <= n; i++){
            X[i] = i;
        }
        vector<string> res;
        do{
            int sum = 0;
            for (int i = 1; i <= n; i++){
                sum += a[i][X[i]];
            }
            if (sum == k){
                string ans = "";
                for (int i = 1; i <= n; i++){
                    ans += to_string(X[i]);
                    ans += " ";
                }
                ans.pop_back();
                res.push_back(ans);
            }
        } while(next_permutation(X + 1, X + n + 1));
        cout << res.size() << endl;
        for (auto x : res){
            cout << x << endl;
        }
    }
}