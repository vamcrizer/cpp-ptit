#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
    ios_base::sync_with_stdio(0); 
    cin.tie(NULL);cout.tie(NULL);
    int t; cin >> t;
    while(t--){
        ll a, x, y; cin >> a >> x >> y;
        int k = __gcd(x,y);
        for (int i = 0; i < k; i++){
            cout << a;
        }
        cout << endl;
    }
}