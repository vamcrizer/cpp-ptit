#include <bits/stdc++.h>
using namespace std;
using ll = long long;
int n, X[100], a[100];
vector<string> ans;
int s;
int res = 1e9;
void Try(int i, int sum, int pos){
    for (int j = pos; j <= n; j++){
        if (sum + a[j] < s){
            sum += a[j];
            i++;
            if (sum == s){
                res = min(i, res);
            }
        } else {
            Try(i, sum, j + 1);
        }
        sum -= a[j];
        i--;
    }
}

int main(){

}