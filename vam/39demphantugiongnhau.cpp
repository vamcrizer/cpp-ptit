#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const int MOD = (int)1e7;
int x[1000000] = {0};
int main(){
    int t; cin >> t;
    while(t--){
    ios_base::sync_with_stdio(0); 
    cin.tie(NULL);cout.tie(NULL);
    map<int, int> mp;
    int n; cin >> n;
    int a[n][n];
    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            cin >> a[i][j];
        }
    }
    for (int i = 0; i < n; i++){
        mp[a[0][i]] = 1;
    }
    int cnt = 0;
    for (int i = 1; i < n; i++){
        for (int j = 0; j < n; j++){
            if (mp[a[i][j]] == i){
                mp[a[i][j]]++;
            }
        }
        }
        for (auto it : mp){
            if (it.second == n){
                cnt++;
            }
        }
        cout << cnt << endl;
}
}