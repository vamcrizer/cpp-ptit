#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const int MOD = (int)1e9 + 7;

double solve(int n){
    if (n == 0){
        return 0;
    } else {
        return sqrt((n) + solve(n - 1));
    }
}

int main(){
    ios_base::sync_with_stdio(0); 
    cin.tie(NULL);cout.tie(NULL);
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        cout << fixed << setprecision(5) << solve(n) << endl;
    }
}
