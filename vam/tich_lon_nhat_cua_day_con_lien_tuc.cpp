#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const int MOD = (int)1e9 + 7;
int X[101];
int n;  
int ok;
int a[205];
void init(){
    for (int i = 1; i <= n; i++){
        X[i] = 0;
    }
}
void sinh(){
    int i = n;
    while(i >= 1 && X[i] == 1){
        X[i] = 0;
        i--;
    }
    if (i == 0){
        ok = 0;
    } else {
        X[i] = 1;
    }
}


int main(){
    int t; cin >> t;
    while(t--){
        init();
        cin >> n;
        for (int i = 1 ; i <= n; i++){
            cin >> a[i];
        }
        ok = 1;
        double sum = 0;
        while(ok){
            double tmp = 0;
            int tmp_idx = 0;
            for (int i = 1; i <= n; i++){
                if (X[i] == 1){
                    tmp += a[i];
                    tmp_idx++;
                }
            }
            double s = tmp/tmp_idx;
            if (s > sum){
                sum = s;
            }
            sinh();

        }
        cout << sum << endl;
    }
}