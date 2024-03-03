#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const int MOD = (int)1e9 + 7;
int x[1000000] = {0};


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

bool check(int X[], int n, int k){
    int cnt = 0;
    for (int i = 1; i <= n; i++){
        cnt += X[i];
    }
    return cnt == k;
}

int main(){
    int t; cin >> t;
    while(t--){
        int X[100] = {0};
        int ok = 1;
        int n, k; 
        cin >> n >> k;
        while(ok){
            if (check(X, n, k)){
            for (int i = 1; i <= n; i++){
                cout << X[i];
            }
            cout << " ";
            }
        sinh(X, n, ok);
        }
        cout << endl;
    }
}