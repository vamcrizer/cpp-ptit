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
        map<int, int> mp;
        for (int i = 0; i < n; i++){
            cin >> a[i];
            mp[a[i]]++;
        }
        int res = 0;
        sort(a, a + n);
        for (int i = 0; i < n - 1; i++){
            if (k - a[i] == a[i]){
                res += mp[a[i]]*(mp[a[i]]-1)/2;
                mp[a[i]] = 0;
            } else {
                res += mp[k - a[i]];
                mp[a[i]] = 0;
            }
        }
        cout << res << endl;
    }
}