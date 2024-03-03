#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const int MOD = (int)1e9 + 7;


void sinh(int X[], int n, int &ok){
    int i = n;
    while(i >= 1 && X[i] == 1){
        X[i] = 0;
        i--;
    }
    if (i == 0){
        ok = false;
    } else {
        X[i] = 1;
    }
}
bool check(int X[], int n){
    if (X[1] == 0 || X[n] == 1){
        return false;
    }
    for (int i = 1 ; i < n; i++)
    if (X[i] == 1 && X[i + 1] == 1) return false;
    return true;
}
int main(){
    int t; cin >> t;
    while(t--){
        int X[100] = {0};
        int ok = 1;
        int n; 
        cin >> n;
        vector<string> ve;
        while(ok){
            if (check(X, n)){
            for (int i = 1; i <= n; i++){
                if (X[i] == 0){
                    cout << 'A';
                } else {
                    cout << 'H';
                }
            
            }  
            cout << endl; 
            }
            sinh(X, n, ok);
        }
        cout << endl;
    }
}