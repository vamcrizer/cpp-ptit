#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
    int t; cin >> t;
    while(t--){
    string c;
    cin >> c;
    int idx;
    for (int i = 0; i < c.length(); i++){
        if (c[i] == '0' && i <= c.length() - 3){
            if (c[i + 1] == '8' && c[i + 2] == '4'){
                idx = i;
                break;
            }
        }
    }
    for (int i = 0; i < c.length(); i++){
        if (i != idx && i != idx + 1 && i != idx + 2){
            cout << c[i];
        }
    }
    cout << endl;
    }
}