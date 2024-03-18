#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const int MOD = (int)1e9 + 7;

int main(){
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        vector<int> ve(n);
        for (int i = 0 ; i < n; i++){
            cin >> ve[i];
        }
        for (int i = 0; i < n; i++){
            while (ve[i] == 0){
                ve.push_back(-1);
                ve.erase(ve.begin() + i);
            }
                if (ve[i] == ve[i + 1]){
                    ve[i] *= 2;
                    ve[i + 1] = 0;
                }
            }
        
        for (auto &x : ve){
            if (x == -1){
                cout << 0;
            } else {
                cout << x;
            }
            cout << " ";
        }
        cout << endl;
    }
}