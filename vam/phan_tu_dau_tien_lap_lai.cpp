#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const int MOD = (int)1e9 + 7;

int main(){
    int t; cin >> t;
    while(t--){
        int n ;cin >> n;
        int a[n];
        map<int,int> mp;
        int ok = 0;
        int res = -1;
        for (int i = 0; i < n; i++){
            cin >> a[i];
            if (mp[a[i]] == 1 && ok == 0){
                res = a[i];
                ok = 1;
            } else {
            mp[a[i]] = 1;
            }
        }
        cout << res << endl;
    }
}