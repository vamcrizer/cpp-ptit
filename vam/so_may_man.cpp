#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int main(){
    int t;cin >> t;
    while(t--){
    string a; cin >> a;
    int n = a.length();
    if (a[n - 2] == '8' && a[n - 1] == '6'){
        cout << 1;
    } else {
        cout << 0;
    }
    cout << endl;
    }
}