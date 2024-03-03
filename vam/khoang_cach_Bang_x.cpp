#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
	ios_base::sync_with_stdio(0); 
    cin.tie(NULL);cout.tie(NULL);
    int t; cin >> t;
    while(t--){
        int n, x; cin >> n >> x;
        int a[n];
        map<int, int> mp;
        for (auto &x : a){
            cin >> x;
            mp[x]++;
        }
        int ok = 0;
        for (int i = 0; i < n; i++){
            if (mp[x + a[i]] != 0){
                ok = 1;
                break;
            }
        }
        if (ok){
            cout << 1 << endl;
        } else {
            cout << -1 << endl;
        }
    }
}