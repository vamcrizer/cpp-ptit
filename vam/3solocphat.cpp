#include <bits/stdc++.h>
using namespace std;

bool check(string a){
    for (int i = 0; i < a.length(); i++){
        if (a[i] != '0' && (int)a[i] != '6' && (int)a[i] != '8'){
            return false;
        }
    }
    return true;
}

int main(){
    int t;
    cin >> t;
    while(t--){
        string s;
        cin >> s;
        if (!check(s)){
            cout << "NO" << endl;
        } else {
            cout << "YES" << endl;
        }
    }
}