#include <bits/stdc++.h>
using namespace std;
using ll = long long;


int main(){
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        int a[n];
        for (auto &x : a) cin >> x;
        sort(a, a + n);
        int res = INT_MAX;
        for (int i = 1; i < n; i++){
            if(a[i] - a[i - 1] < res){
                res = a[i] - a[i - 1];
            }
        }
        cout << res << endl;
    }
}