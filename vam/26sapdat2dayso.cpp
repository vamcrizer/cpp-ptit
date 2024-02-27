#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const int MOD = (int)1e7;

int main(){
    ios_base::sync_with_stdio(0); 
    cin.tie(NULL);cout.tie(NULL);
    int t; cin >> t;
    while(t--){
        map<int, int> mp;
        int n, m; cin >> n >> m;
        int a[n], b[m];
        for (int i = 0; i < n; i++){
            cin >> a[i];
            mp[a[i]]++;
        }
        for (int i = 0; i < m; i++){
            cin >> b[i];
        }
        for (int i = 0; i < m; i++){
            for (int j = 0; j < mp[b[i]]; j++){
                cout << b[i] << " ";
            }
            mp[b[i]] = 0;
        }
        sort(a, a + n);
        for (auto k : a){
            if (mp[k] != 0){
                cout << k << " ";
            }
        }
        cout << endl;
    }
}