#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const int MOD = (int)1e9 + 7;

int main(){
    ios_base::sync_with_stdio(0); 
    cin.tie(NULL);cout.tie(NULL);
    int n; cin >> n;
    int y = n / 365;
    n %= 365;
    int w = n / 7;
    n %= 7;
    cout << y << " " << w << " " << n;
}