#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int binary_search(int a[], int n, int k){
    int res = -1;
    int l = 0, r = n - 1;
    while(l <= r){
        int m = (l + r)/2;
        if (a[m] == k){
            res = m;
            r = m - 1;
        } else if (a[m] > k){
            r = m - 1;
        } else {
            l = m + 1;
        }
    }
    return res;
}

int main(){
    int t; cin >> t;
    while(t--){
        int n ,k; cin >> n >> k;
        int a[n];
        for (auto &x : a) cin >> x;
        cout << binary_search(a, n, k);
    }
}