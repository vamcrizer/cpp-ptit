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
    set<int> se;
    int n, k; cin >> n >> k;
    for (int i = 0; i < n*n; i++){
        int x; cin >> x;
        se.insert(x);
        }
    auto it = se.begin();
    advance(it, k - 1);
    cout << *(it) << endl;
    }
}