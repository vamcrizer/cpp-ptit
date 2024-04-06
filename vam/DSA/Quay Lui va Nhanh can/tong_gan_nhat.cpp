#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int n, X[100], a[100];
int k = 3;
int s;
int res = 0;
void Try(int i){
    for (int j = X[i - 1] + 1; j <= n - k + i; j++){
        X[i] = j;
        if (i == k){
            int sum = 0;
            for (int j = 1; j <= k; j++){
                sum += a[X[j]];
            }
            if (sum <= s){
                res = max(sum, res);
            }
        } else {
            Try(i + 1);
        }
    }
}

int main(){

}