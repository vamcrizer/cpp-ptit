#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const int MOD = (int)1e9 + 7;

int main(){
    ios_base::sync_with_stdio(0); 
    cin.tie(NULL);cout.tie(NULL);
    int t; cin >> t;
    while(t--){
        int x[200] = {0};
        string a; cin >> a;
        int k; cin >> k;
        for (int i = 0; i < a.length(); i++){
            x[a[i]]++;
        }
        int cnt = 0;
        for (int i = 97 ; i <= 122; i++){
            if (x[i] == 0){
                cnt++;
            }
        }
        if (k >= cnt){
            cout << 1 << endl;
        } else {
            cout << 0 << endl;
        }
    }
}
