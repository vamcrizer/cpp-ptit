#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const int MOD = (int)1e9 + 7;

int main(){
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        int a[n];int b[n];
        for (int i = 0; i < n; i++){
            cin >> a[i];
            b[i] = a[i];
        }
        sort(a, a + n);
        sort(b, b + n, greater<int>());
        for (int i = 0; i < n / 2; i++){
            if (a[i] != b[i]){
            cout << b[i] << " " << a[i] << " ";
            } else {
                cout << b[i] << " ";
            }
        }
        cout << endl;
    }
}