#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const int MOD = (int)1e7;
int x[1000000] = {0};

ll f[94];
void fib(){
    f[0] = 0; 
    f[1] = 1;
    for (int i = 2; i <= 93; i++){
        f[i] = f[i - 1] + f[i - 2];
    }
}

bool check(ll n){
    for (int i = 0; i <= 93; i++){
        if (f[i] == n){
            return true;
        }
    }
    return false;
}

int main(){
    ios_base::sync_with_stdio(0); 
    cin.tie(NULL);cout.tie(NULL);
    int t; cin >> t;
    fib();
    while(t--){
        int n;
        set<int> se;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++){
            cin >> a[i];
        
        }
        for (auto x : a){
            if (check(x)){
                cout << x << " ";
            }
        }
        cout << endl;
    }
}