#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
    int t; cin >> t;
    while(t--){
        int ok = 0;
    int n, k;
    cin >> n >> k;
    int s = 0;
    for (int i = 2; i <= sqrt(n); i++){
        while(n % i == 0){
            s++;
            if (s == k){
                cout << i;
                ok = 1;
                break;
            }
            n /= i;
        }
    }
    if (ok == 0){
        cout << -1;
    }
    cout << endl;
    }
}