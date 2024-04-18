#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
    int t; cin >> t;
    while(t--){
        int n,k; cin >> n >> k;
        int a[n];
        for (auto &x : a) cin >> x;
        sort(a, a + n);
        int res = 1;
        for (int i = 1; i < n; i++){
            if (a[i] - a[i - 1] > k){
                res++;
            }
        }
        cout << res << endl;
    }
}