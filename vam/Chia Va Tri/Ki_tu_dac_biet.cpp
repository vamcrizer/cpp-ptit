#include <bits/stdc++.h>
using namespace std;
using ll = long long;
string s;
ll n, len;

char solve1(ll n, ll k){
    if (n <= s.size()){
        return s[n - 1];
    }
    if (n <= k / 2){
        return solve1(n, k / 2);
    } else {
        ll tmp = n - k / 2;
        if (tmp == 1){
            return solve1(k / 2, k / 2);
        } else {
            return solve1(tmp - 1, k / 2);
        }
    }
}

void nhap(){
    cin >> s >> n;
    while(len < n){
        len *= 2;
    }
    cout << solve1(n, len);
}

int main(){
    nhap();
}