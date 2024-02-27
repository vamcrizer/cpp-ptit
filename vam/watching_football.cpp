#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
    ios_base::sync_with_stdio(0); 
    cin.tie(NULL);cout.tie(NULL);
    int n; cin >> n;
    int a[n]; for (auto &x : a) cin >> x;
    sort(a, a + n);
    int p = 15;
    if (p < a[0]){
        cout << 15;
        return 0;
    }
    for (int i = 0; i < n; i++){
        if (p >= a[i]){
            p = a[i] + 15;
        } else {
            break;
        }
    }
    if (p > 90){
        p = 90;
    }
    cout << p;
}
