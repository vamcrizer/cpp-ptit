#include <bits/stdc++.h>
using namespace std;
const int MX = 100000;
int p[MX + 5];

void sang(){
    for(int i = 1; i <= MX; i++){
        p[i] = i;
    }
    for (int i = 2; i <= sqrt(MX); i++){
        if (p[i] == i){
        for (int j = i * i; j <= MX; j += i){
            if (p[j] == j){
                p[j] = i;
                }
            }
        }
    }
}
int main(){
    sang();
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        for (int i = 1; i <= n; i++){
            cout << p[i] << " ";
        }
        cout << endl;
    }
}