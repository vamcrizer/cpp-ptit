#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const int MOD = (int)1e9 + 7;
int X[100], ok, n, k;

void ktao(){
    for (int i = 1; i <= k; i++){
        X[i] = i;
    }
}

void sinh(){
    int i = k;
     while(i >= 1 && X[i] == n - k + i){
        i--;
     }
     if (i == 0){
        ok = 0;
     } else {
        X[i]++;
        for (int j = i + 1; j <= k; j++){
            X[j] = X[j - 1] + 1;
        }
     }
}

int main(){
    int t; cin >> t;
    while(t--){
        int x, y; cin >> x >> y;
        set<int> se;
        for (int i = 1; i <= x; i++){
            int tmp; cin >> tmp;
            se.insert(tmp);
        }
        vector<int> ve;
        for (auto x : se){
            ve.push_back(x);
        }
        n = ve.size();
        k = y;
        ktao();
        ok = 1;
        while(ok){
            for (int i = 1; i <= k; i++){
                cout << ve[X[i] - 1] << " ";
            }
            cout << endl;
            sinh();
        }
        cout << endl;
        }

}