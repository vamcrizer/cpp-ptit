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

bool check(int x[], int n, int k){
    int res = 0, cnt = 0;
    for (int i = 1; i <= n; i++){
        if (x[i] == 0){
            cnt++;
        } else {
            cnt = 0;
        }
        if (cnt > k){
            return false;
        }
        if (cnt == k){
            res++;
        }
    }
    return res == 1;
}

bool check2(int x[], int n, int k){
    int res = 0, cnt = 0;
    for (int i = 1; i <= n; i++){
        if (x[i] == 1){
            cnt++;
        } else {
            cnt = 0;
        }
        if (cnt > k){
            return false;
        }
        if (cnt == k){
            res++;
        }
    }
    return res == 1;
}

int main(){
        int X[100] = {0};
        int ok = 1;
        int n, k; 
        cin >> n >> k;
        while(ok){
            if (check(X, n, k)){
                for (int i = 1; i <= n; i++){
                    if (X[i] == 0){
                        cout << 'A';
                    } else {
                        cout << 'B';
                        }
                    }
            cout << endl;
            }
            sinh(X, n, ok);
            }
        cout << endl;
}