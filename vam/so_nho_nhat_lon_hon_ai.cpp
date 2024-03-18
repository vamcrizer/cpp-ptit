#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const int MOD = (int)1e9 + 7;

int main(){
    int t; cin >> t;
    while(t--){
    int n; cin >> n;
    int a[n];
    vector<int> ve;
    for (auto &x : a) {
        cin >> x;
        ve.push_back(x);
    }
    sort(ve.begin(), ve.end());
    for (int i = 0; i < n; i++){
        auto it = upper_bound(ve.begin(), ve.end(),a[i]);
        if (it != ve.end()){
            cout << ve[it - ve.begin()];
        } else {
            cout << "_";
        }
        cout << " ";
    }
    cout << endl;
    }
}