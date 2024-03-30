#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const int MOD = (int)1e9 + 7;
int n;
int X[100];

void in(){
    for (int i = 1; i <= n; i++){
        cout << X[i] << " ";
    }
}
void Try(int i){
    for (int j = 0; j <= 1; j++){
        X[i] = j;
        if (i == n){
            in();
            cout << endl;
        } else {
            Try(i + 1);
        }
    }
}

int main(){
    cin >> n;
    Try(1);
}