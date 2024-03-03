#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const int MOD = (int)1e9 + 7;
int x[1000000] = {0};

void sinh(int X[], int n, int &ok){
    int i = n - 1;
    while(i >= 1 && X[i] > X[i + 1]){
        i--;
    }
    if (i == 0){
        ok = 0;
    } else {
        int j = n;
        while(X[i] > X[j]){
            j--;
        }
        swap(X[i], X[j]);
        reverse(X + i + 1, X + n + 1);
    }
}


int main(){
    int t; cin >> t;
    while(t--){
        int ok = 1;
        int n; cin >> n;
        int X[100];
        for (int i = 1; i <= n; i++){
            X[i] = i;
        }
        while(ok){
            for (int i = 1; i <= n; i++){
                cout << X[i];
            }
            sinh(X, n ,ok);
        cout << " ";
        }
        cout << endl;
    }
}