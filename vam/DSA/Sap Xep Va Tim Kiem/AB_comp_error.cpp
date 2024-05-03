#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
    ios_base::sync_with_stdio(0); 
    cin.tie(NULL);cout.tie(NULL);
    int n; cin >> n;
    int a[n], b[n - 1], c[n - 2];
    for (auto &x : a) cin >> x;
    for (auto &x : b) cin >> x;
    for (auto &x : c) cin >> x;
    sort(a, a + n);
    sort(b, b + n - 1);
    sort(c, c + n - 2);
    bool ok = false;
    for (int i = 0; i < n - 1 ; i++){
        if (a[i] != b[i]){
            cout << a[i] << endl;
            ok = true;
            break;
        }
    }
    if (!ok){
        cout << a[n - 1] << endl;
    }
    ok = false;
    for (int i = 0; i < n - 2; i++){
        if (b[i] != c[i]){
            cout << b[i] << endl;
            ok = true;
            break;
        }
    }
    if (!ok){
        cout << b[n - 2] << endl;
    }
}