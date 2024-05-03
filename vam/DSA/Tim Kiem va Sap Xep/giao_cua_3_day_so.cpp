#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const int MOD = (int)1e9 + 7;

int main(){
    ios::sync_with_stdio(false);
	cin.tie(nullptr);
    int t; cin >> t;
    while(t--){
        int l,m,n; cin >> l >> m >> n;
        ll a[l],b[m],c[n];
        for (auto &x : a) cin >> x;
        for (auto &x : b) cin >> x;
        for (auto &x : c) cin >> x;
        int i = 0, j = 0, k = 0;
        vector<ll> res;
        while(i < l && j < m && k < n){
            if(a[i] == b[j] && b[j] == c[k]){
                res.push_back(a[i]);
                i++,j++,k++;
            } else if (a[i] <= b[j] && a[i] <= c[k]){
                i++;
            } else if (b[j] <= a[i] && b[j] <= c[k]){
                j++;
            } else {
                k++;
            }
        }
        if (res.size() == 0){
            cout << -1 << endl;
            continue;
        }
        for ( auto x : res){
             cout << x << " ";
        }
        cout << endl;
    }
}