#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const int MOD = (int)1e9 + 7;
int x[1000000] = {0};

int main(){
    int t; cin >> t;
    while(t--){
        string a; cin >> a;
        int n = a.length() - 1;
        int i = n;
        while(i >= 0 && a[i] == '1'){
            a[i] = '0';
            i--;
        }
        if (i < 0){
            next_permutation(a.begin(), a.end());
        } else {
            a[i] = '1';
        }
        
        cout << a << endl;
    }
}