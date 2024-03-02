#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const int MOD = (int)1e9 + 7;
int x[1000000] = {0};
int main(){
    int t; cin >> t;
    while(t--){
        int x[10005] = {0};
        int n; cin >> n;
        int a[n];
        int res = 0;
        for (int i = 0; i < n; i++){
            cin >> a[i];
            x[a[i]]++;
        }
        int min_e = *min_element(a, a + n);
        int max_e = *max_element(a, a + n);
        for (int i = min_e; i < max_e; i++){
            if(x[i] == 0){
                res++;
            }
        }
        cout << res << endl;
    }
}