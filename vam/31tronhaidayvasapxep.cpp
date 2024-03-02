#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const int MOD = (int)1e7;
int x[1000000] = {0};
int main(){
    ios_base::sync_with_stdio(0); 
    cin.tie(NULL);cout.tie(NULL);
    int t; cin >> t;
    while(t--){
    set<int> se;
    int a, b; cin >> a>> b;
    for (int i = 0; i < a + b; i++){
        int x; cin >> x;
        se.insert(x);
    }
    for (auto x : se){
        cout << x << " ";
    }
    cout << endl;
    }
}