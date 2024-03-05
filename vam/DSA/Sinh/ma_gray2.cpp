#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const int MOD = (int)1e9 + 7;

void solve(string s){
    cout << s[0];
    for (int i = 1; i < s.length(); i++){
        if (s[i] == s[i - 1]){
            cout << 0;
        } else {
            cout << 1;
        }
    }
    cout << endl;
}

int main(){
    int t; cin >> t;
    while(t--){
        string s; cin >> s;
        solve(s);
    }
}