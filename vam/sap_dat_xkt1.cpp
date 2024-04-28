#include <bits/stdc++.h>
using namespace std;

int main(){
    int t; cin >> t;
    while(t--){
        string a; cin >> a;
        sort(a.begin(), a.end());
        bool ok = false;
        do{
            ok = true;
            for (int i = 1; i < a.length(); i++){
                if (a[i] == a[i - 1]){
                    ok = false;
                    break;
                }
            }
            if (ok){
                break;
            }
        } while(next_permutation(a.begin(), a.end()));
        if (ok){
            cout << 1 << endl;
        } else {
            cout << 0 << endl;
        }
    }
}
