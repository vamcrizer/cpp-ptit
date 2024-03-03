#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
	ios_base::sync_with_stdio(0); 
    cin.tie(NULL);cout.tie(NULL);
    int t; cin >> t;
    while(t--){
        int res = 0;
        string a; cin >> a;
        ll mod; cin >> mod;
        for (int i = 0; i < a.length();i++){
            res = res * 10 + (a[i] - '0') % mod;
            res %= mod;
        }
        cout << res << endl;
    }
}