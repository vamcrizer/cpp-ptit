#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
    ios_base::sync_with_stdio(0); 
    cin.tie(NULL);cout.tie(NULL);
    int t; cin >> t;
    while(t--){
    int n; cin >> n;
    int a[n];
    for (int i = 0; i < n; i++){
        cin >> a[i];
    }
    int res = 0;
    for (int i = 0; i < n; i++){ 
        auto it = lower_bound(a + i, a + n, a[i]);
        int pos = it - a;
            if (abs(pos - i) > res){
                res = abs(pos - i);
        }
    }
    cout << res << endl;
    }
    return 0;
}