#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const int MOD = (int)1e9 + 7;
int X[100];
int ok, n, k;
char c;

void ktao(){
    for (int i = 1; i <= n; i++){
        X[i] = 1;
    }
}

void sinh(){
    int i = n;
     while(i >= 1 && X[i] == n){
        i--;
     }
     if (i == 0){
        ok = 0;
     } else {
        X[i]++;
        for (int j = i + 1; j <= n; j++){
            X[j] = 1;
        }
     }
}


int main(){
    int t; cin >> t;
    while(t--){
    cin >> n;
    vector<string> hoanvi;
    vector<string> chinhhop;
    ktao();
    string s = "";
    for (int i = 1; i <= n; i++){
        s += 'A' + i - 1;
    }
    do {
        hoanvi.push_back(s);
    } while (next_permutation(s.begin(), s.end()));
    ok = 1;
    while(ok){
        string tmp = "";
        for (int i = 1 ; i <= n; i++){
            tmp += to_string(X[i]);
        }
        chinhhop.push_back(tmp);
        sinh();
    }
    for (auto x : hoanvi){
        for (auto y : chinhhop){
            cout << x << y << endl;
        }
    }
    }

}