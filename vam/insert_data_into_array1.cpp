#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const int MOD = (int)1e9 + 7;

int main(){
    ios_base::sync_with_stdio(0); 
    cin.tie(NULL);cout.tie(NULL);
    int t; cin >> t;
    for (int i = 1; i <= t;i++){
    int n, m; cin >> n >> m;
    int x; cin >> x;
    int a[n], b[m];
    for (int i = 0; i < n; i++){
        cin >> a[i];
    }
    for (int i = 0; i < m; i++){
        cin >> b[i];
    }
    cout << "Test " << i << ":\n";
    for (int i = 0; i < x; i++){
        cout << a[i] << " ";
    }
    for (int i = 0; i < m; i++){
        cout << b[i] << " ";
    }
    if (x != n){
    for (int i = x; i < n; i++){
        cout << a[i] << " ";
    }
    }
    cout << endl;
    }
}
