#include <bits/stdc++.h>
using namespace std;
using ll = long long;

bool check(string c){
    for (int i = 1; i < c.length(); i++){
        if (abs(c[i] - c[i - 1]) != 1){
            return false;
        }
    }
    return true;
}

int main(){
    int t; cin >> t;
    while(t--){
    string a; cin >> a;
    if (check(a)){
        cout << "YES\n";
    } else {
        cout << "NO\n";
    }
    }
}