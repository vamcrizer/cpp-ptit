#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const int MOD = (int)1e9 + 7;

void solve(string s){
    string tmp = "";
    tmp += s[0];
    for (int i = 1; i < s.length(); i++){
        if (s[i] == '1'){
            if(tmp[i - 1] == '0'){
                tmp += '1';
            } else {
                tmp += '0';
            }
        } else {
            tmp += tmp[i - 1];
        }
    }
    cout << tmp << endl;
}

int main(){
    int t; cin >> t;
    while(t--){
        string s; cin >> s;
        solve(s);
    }
}