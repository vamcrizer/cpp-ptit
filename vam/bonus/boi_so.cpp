#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const int MOD = (int)1e9 + 7;
int ok;
vector<string> ans;
ll res[501];
string X;
void sinh(){
    int i = X.size() - 1;
    while(i >= 0 && X[i] == '9'){
        X[i] = '0';
        i--;
    }
    if (i == 0){
        ok = false;
    } else {
        X[i] = '9';
    }
}

int main(){
    X = "0000000000000";
    ok = 1;
    while(ok){
        ans.push_back(X);
        sinh();
    }
    for (int i = 1; i <= 500; i++){
        for (auto x : ans){
            ll tmp = stoll(x);
            if (tmp != 0 && tmp % i == 0){
                res[i] = tmp;
                break;
            }
        }
    }
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        cout << res[n] << endl;
    }
}