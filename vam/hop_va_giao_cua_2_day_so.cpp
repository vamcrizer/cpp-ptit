#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const int MOD = (int)1e9 + 7;

int main(){
    int t; cin >> t;
    while(t--){
    int n, m; cin >> n >> m;
    int a[n], b[m];
    map<int, int> mp;
    for (auto &x : a){
        cin >> x;
        mp[x] = 1;
    }
    for (auto &x : b){
        cin >> x;
        if (mp[x] == 1){
            mp[x] = 2;
        }
    }
    for (auto it : mp){
        cout << it.first << " ";
    }
    cout << endl;
    for (auto it : mp){
        if (it.second == 2){
            cout << it.first << " ";
        }
    }
    cout << endl;
    }
}