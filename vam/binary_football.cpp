#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const int MOD = (int)1e9 + 7;

int main(){
    string a; cin >> a;
    int x[10] = {0};
    int ok = 0;
    for (int i = 0; i < a.length(); i++){
        if (a.substr(i, 7) == "1111111" || a.substr(i, 7) == "0000000"){
            ok = 1;
            break;
        }
    }
    if (ok){
        cout << "YES";
    } else {
        cout << "NO";
    }
}