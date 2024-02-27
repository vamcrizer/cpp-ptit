#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const int MOD = (int)1e9 + 7;

int main(){
    ios_base::sync_with_stdio(0); 
    cin.tie(NULL);cout.tie(NULL);
    int t; cin >> t;
    while(t--){
    int n; cin >> n;
    int res = -1;
    int a[n]; for (int &x : a) cin >> x;
    for (int i = 0; i < n; i++){
        for (int j = i + 1; j < n; j++){
            if (a[j] > a[i]){
                if (a[j] - a[i] > res){
                    res = a[j] - a[i];
                }
            }
        }
    }
    cout << res << endl;
    }
}