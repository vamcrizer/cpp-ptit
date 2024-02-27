#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const int MOD = (int)1e7;

string check(int a[], int n, int l, int r){
    auto k = max_element(a + l, a + r);
    int pos = distance(a, k);
    for (int i = l + 1; i < pos; i++){
        if (a[i] < a[i - 1]){
            return "No\n";
        }
    }
    for (int i = pos + 1; i <= r; i++){
        if (a[i] > a[i - 1]){
            return "No\n";
        }
    }
    return "Yes\n";
}

int main(){
    ios_base::sync_with_stdio(0); 
    cin.tie(NULL);cout.tie(NULL);
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        int a[n]; for (auto &x : a) cin >> x;
        int l, r; cin >> l >> r;
        cout << check(a, n, l, r) << endl;
    }
}