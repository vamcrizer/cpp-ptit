#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const int MOD = (int)1e7;
int x[1000000] = {0};
int main(){
    int t; cin >> t;
    while(t--){
    ios_base::sync_with_stdio(0); 
    cin.tie(NULL);cout.tie(NULL);
    int n; cin >> n;
    int a[n - 1];
    for (auto &x : a){
        cin >> x;
    }
    for (int i = 1; i < n - 1; i++){
        if (a[i] - a[i - 1] != 1){
            cout << a[i] - 1 << endl;
            break;
        }
    }
    }
}