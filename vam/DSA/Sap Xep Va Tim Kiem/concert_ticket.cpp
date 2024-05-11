#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
    ios_base::sync_with_stdio(0); 
    cin.tie(NULL);cout.tie(NULL);
    int n, m; cin >> n >> m;
    int a[n], b[m];
    multiset<int> se;
    for (int i = 0; i < n; i++){
        cin >> a[i];
        se.insert(a[i]);
    }
    for (auto &x : b) cin >> x;
    for (int i = 0; i < m; i++){
        auto it = se.upper_bound(b[i]);
        if (it == se.begin()){
            cout << "-1\n";
        } else {
            int x = *(--it);
            cout << x << endl;
            se.erase(it);
        }
    }
}