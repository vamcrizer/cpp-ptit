#include <bits/stdc++.h>
using namespace std;
using ll = long long;



int main(){
    int t; cin >> t;
    while(t--){
        int A[100000] = {0};
        int n; cin >> n;
        int a[n + 5];
        for (int i = 0; i < n; i++){
            cin >> a[i];
            A[a[i]] = 1;
        }
        int cnt = 0;
        int min_e = *min_element(a, a + n);
        int max_e = *max_element(a, a + n);
        for (int i = min_e; i <= max_e; i++){
            if (A[i] != 1){
                cnt++;
            }
        }
        cout << cnt << endl;
    }
}