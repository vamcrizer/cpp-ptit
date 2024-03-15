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
        for (auto &x : a){
             cin >> x;
             ve.push_back(x);
        }
        sort(ve.begin(), ve.end());
        vector<int> ve2;
        for (int i = 0; i < n; i++){
            if (a[i] != ve[i]){
                ve2.push_back(i + 1);
            }
        }
        cout << ve2.front() << " " << ve2.back() << endl;
    }
}