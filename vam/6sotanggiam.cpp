#include <bits/stdc++.h>
using namespace std;
using ll = long long;
bool nt(ll n){
    for (int i = 2; i <= sqrt(n); i++){
        if (n % i == 0){
            return false;
        }
    }
    return n > 1;
}
bool check(ll n){
    if (!nt(n)){
        return false;
    }
    int digit = n % 10;
    n /= 10;
    int incre = 0, decre = 0;
    if (n % 10 < digit){
            incre = 1;
        } else if (n % 10 > digit){
            decre = 1;
        } else if (n % 10 == digit) {
            return false;
        }
    
    while(n > 0){
        int num = n % 10;
        if (num < digit && decre == 1){
            return false;
        } else if (num > digit && incre == 1){
            return false;
        } else if (num == digit){
            return false;
        }
        digit = num;
        n /= 10;
    }
    return true;
}
int main(){
    int t; cin >> t;
    while(t--){
        int cnt = 0;
        int n; cin >> n;
        ll start = pow(10,n-1);
        ll end = start * 10;
        for (int i = start; i < end; i++){
            if(check(i)){
                cnt++;
            }
        }
        cout << cnt << endl;
    }
}