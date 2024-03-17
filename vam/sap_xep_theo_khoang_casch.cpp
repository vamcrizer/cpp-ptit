#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const int MOD = (int)1e9 + 7;
int x;
bool cmp(int a, int b){
    return abs(a - x) < abs(b - x);
}

int main(){
    int t; cin >> t;
    while(t--){
        int n; cin >> n >> x;
        int a[n];
        for (auto &x : a) cin >> x;
        stable_sort(a, a + n, cmp);
        for (auto i : a){
            cout << i << " ";
        }
        cout << endl;
    }
}