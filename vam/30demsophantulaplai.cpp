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
    map<int, int> ma;
    int a[n];
    for (auto &x : a){
        cin >> x;
        ma[x]++;
    }
    int sum = 0;
    for (auto it : ma){
        if (it.second > 1){
            sum += it.second;
        }
    }
    cout << sum << endl;
    }
}