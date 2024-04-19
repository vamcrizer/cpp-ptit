#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
    int n,m; cin >> n >> m;
    int b[n], c[m];
    for (int i = 1; i <= n; i++){
        cin >> b[i];
    }
    for (int i = 1; i <= m; i++){
        cin >> c[i];
    }
    int i = 1, j = 1;
    while(i <= m || j <= m){
        if (b[i] <= c[j]){
            cout << "b" << i << " ";
            i++;
        } else {
            cout << "c" << j << " ";
            j++;
        }
    }

}