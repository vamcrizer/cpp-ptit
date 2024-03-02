#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const int MOD = (int)1e9 + 7;
int x[1000000] = {0};

int main(){
    int t; cin >> t;
    while(t--){
        int n, k; cin >> n >> k;
        int a[n];
        map<int,int> mp;
        for (auto &x : a){
            cin >> x;
            mp[x]++;
        }
        if (mp[k] > 0){
            cout << mp[k];
        } else {
            cout << -1;
        }
        cout << endl;
    }
}