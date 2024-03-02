#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const int MOD = (int)1e9 + 7;
int x[1000000] = {0};

int main(){
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        int a[n];
        for (auto &x : a) cin >> x;
        sort(a, a + n);
        for (int i = n - 1; i >= n / 2; i--){
            if (n - 1 - i != i){
            cout << a[i] << " " << a[n - 1 - i] << " ";
            } else {
                cout << a[i] << " ";
            }
        }
        cout << endl;
    }
}