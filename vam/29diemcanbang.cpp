#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const int MOD = (int)(1e9 + 7);
int x[1000000] = {0};


int main(){
    
    ios_base::sync_with_stdio(0); 
    cin.tie(NULL);cout.tie(NULL);
    int t; cin >> t;
    while(t--){
    int n; cin >> n;
    int a[n];
    for (int &x : a){
        cin >> x;
    }
    int l[n];
    l[0] = a[0];
    for (int i = 1 ; i < n; i++){
        l[i] = l[i - 1] + a[i];
    }
    int idx, ok = 0;
    for (int i = 0 ; i < n; i++){
        if (l[i] == l[n - 1] - l[i + 1]){
            idx = i + 1;
            ok = 1;break;
        }
    }
    if (ok){
        cout << idx+1 << endl;
    } else {
        cout << -1 << endl;
    }
    }
}