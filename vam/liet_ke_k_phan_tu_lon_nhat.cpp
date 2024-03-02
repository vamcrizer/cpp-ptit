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
        for (auto &x : a) cin >> x;
        sort(a, a + n, greater<int>());
        for (int i = 0; i < k; i++){
            cout << a[i] << " ";
        }
        cout << endl;
    }
}