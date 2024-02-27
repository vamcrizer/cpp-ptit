#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const int MOD = (int)1e7;

int check(string a){
    for (int i = 1; i < a.length(); i++){
        if (a[i] != a[i - 1]){
            return 1;
        }
    }
    return 0;
}

int main(){
    int t; cin >> t;
    cin.ignore();
    while(t--){
        string a;
        getline(cin, a);
        cout << check(a) << endl;
    }
}