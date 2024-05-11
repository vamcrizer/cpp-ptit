#include <bits/stdc++.h>
using namespace std;
using ll = long long;

bool prime(int n){
    for (int i = 2; i <= sqrt(n);i++){
        if (n % i == 0){
            return false;
        }
    }
    return n > 1;
}

int main(){
    ios_base::sync_with_stdio(0); 
    cin.tie(NULL);cout.tie(NULL);
    int t; cin >> t;
    while(t--){
        ll l,r; cin >> l >> r;
        int c1 = sqrt(l), c2 = sqrt(r);
        if (c1 * c1 == l){
            c1--;
        }
        int cnt = 0;
        for (int i = c1; i<= c2;i++){
            if (prime(i)){
                cnt++;
            }
        }
        cout << cnt << endl;
    }
}