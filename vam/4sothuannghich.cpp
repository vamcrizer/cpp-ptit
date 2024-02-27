#include <bits/stdc++.h>
using namespace std;

bool check(string a){
    int l = 0, r = a.length() - 1;
    while (l < r){
        if (a[l] != a[r]){
            return false;
        }
        ++l, --r;
    }
    return true;
}

int main(){
    int t; cin >> t;
    while (t--){
        string a;
        cin >> a;
        if (check(a)){
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
}