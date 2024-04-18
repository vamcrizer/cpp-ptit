#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
    int n; cin >> n;
    int a[n];
    for (auto &x : a) cin >> x;
    sort(a, a + n, greater<int>());
    int stand = a[0];
    int res = 1;
    for (int i = 0; i < n; i++){
        if (stand >= 1){
            res++;
        } else {
            stand = min(stand - 1, a[i]);
        }
    }
    cout << res << endl;
}