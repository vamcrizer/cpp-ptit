#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const int MOD = (int)1e9 + 7;
int x[1000000] = {0};


int main(){
    int t; cin >> t;
    while(t--){
        vector<string> ve;
        int n; cin >> n;
        for (int i = 1; i <= n; i++){
            string a; cin >> a;
            ve.push_back(a);
        }
        sort(ve.begin(), ve.end());
        do{
            for (auto x : ve){
                cout << x << " ";
            }
            cout << endl;
        } while(next_permutation(ve.begin(), ve.end()));
    }
}