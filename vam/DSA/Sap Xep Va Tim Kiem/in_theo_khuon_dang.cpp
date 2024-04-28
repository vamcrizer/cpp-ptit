#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        int a[n];
        for (auto &x : a) cin >> x;
        sort(a, a + n, greater<int>());
        int l = 0, r = n - 1;
        while(l < r){
            cout << a[l] << " " << a[r] << " ";
            ++l, --r;
        }
        if (l == r){
            cout << a[l];
        }
        cout << endl;
    }
}