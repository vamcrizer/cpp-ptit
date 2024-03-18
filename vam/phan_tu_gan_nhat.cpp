#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const int MOD = (int)1e9 + 7;

int main(){
    int t; cin >> t;
    while(t--){
    int n; cin >> n;
    int a[n];
    for (int i = 0; i < n; i++){
        cin >> a[i];
    }
    int k; cin >> k;
    int x; cin >> x;
    k /= 2;
    auto it = lower_bound(a, a + n, x);
    for (int i = k; i >= 1; i--){

        cout << a[it - a - i] << " ";
    }
    if (a[it - a] > x){
        it -= 1;
    }
    for (int i = 1; i <= k; i++){
        cout << a[it - a + i] << " ";
    }
    cout << endl;
    }
}