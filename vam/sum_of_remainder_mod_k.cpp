#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const int MOD = (int)1e9 + 7;

int main(){
    ios_base::sync_with_stdio(0); 
    cin.tie(NULL);cout.tie(NULL);
    int t; cin >> t;
    while(t--){
        ll n, k; cin >> n >> k;
        ll sum = 0;
        for (int i = 1; i <= n; i++){
            sum += i % k;
        }
        if (sum == k){
            cout << 1 << endl;
        } else {
            cout << 0 << endl;
        }
    }
    
}