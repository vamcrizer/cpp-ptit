#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
    int m,n; cin >> m >> n;
    int a[m], b[n];
    for (auto &x : a) cin >> x;
    for (auto &x : b) cin >> x;
    sort(a, a + n);
    sort(b, b + m);
    int i = 0, j = 0;
    int res = 0;
    while(i < n && j < m){
        if (a[i] > b[j]){
            res++;
            i++, j++;
        } else {
            i++;
        }
    }
    cout << res << endl;

}