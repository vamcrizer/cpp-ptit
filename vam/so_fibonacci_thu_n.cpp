#include <bits/stdc++.h>
using namespace std;
using ll = long long;

ll f[94];
void fibo(){
    f[0] = f[1] = 1;
    for (int i = 2; i <= 92; i++){
        f[i] = f[i - 1] + f[i - 2];
    }
}

int main(){
    fibo();
    int t; cin>>t;
    while(t--){
        int n; cin >> n;
        cout << f[n - 1] << endl;
    }
}