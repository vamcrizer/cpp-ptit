#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const int MOD = (int)1e7;
int x[1000000] = {0};
int main(){
    ios_base::sync_with_stdio(0); 
    cin.tie(NULL);cout.tie(NULL);
    int n; cin >> n;
    set<int> sett;
    for (int i = 0; i < n; i++){
        int x; cin >> x;
        sett.insert(x);
    }
    for (auto x : sett){
        cout << x << " ";
    }
}