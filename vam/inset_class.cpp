#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
    freopen("DATA.in", "r", stdin);
    int n, m; cin >> n >> m;
    map<int,int> mp;
    set <int> se;
    int a[n], b[m];
    for (int i = 0; i < n; i++){
        cin >> a[i];
        mp[a[i]]++;
    }
    for (int i = 0; i < m; i++){
        cin >> b[i];
    }
    for (int i = 0; i < m; i++){
        if (mp[b[i]]){
            se.insert(b[i]);
        }
    }
    for (auto x : se){
        cout << x << " ";
    }
}