#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const int MOD = (int)1e9 + 7;

int main(){
    ios_base::sync_with_stdio(0); 
    cin.tie(NULL);cout.tie(NULL);
    int n; cin >> n;
    cout << "1\n";
    int num = 1;
    for (int i = 1; i <= n - 1; i++){
        for (int j = 1; j <= num + 2; j++){
            cout << j;
        }
        num += 2;
        cout << endl;
    }
}