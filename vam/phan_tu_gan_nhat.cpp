#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const int MOD = (int)1e9 + 7;


int a[1000001];
int main(){
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        for (int i = 1; i <= n; i++){
            cin >> a[i];
        }
        int k,x; cin >> k >> x;
        auto it = lower_bound(a + 1 , a + n + 1, x) - a;
        int l = k / 2;
        for (int i = it - l ; i < it; i++){
            cout << a[i] << " ";
        }
        if (a[it] == x){
            it++;
        }
        for (int i = it; i < it + l; i++){
            cout << a[i] << " ";
        }
        cout << endl;
    }
}