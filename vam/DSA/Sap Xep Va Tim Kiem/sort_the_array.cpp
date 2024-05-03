#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
    int n; cin >> n;
    int a[n];
    for (auto &x : a) cin >> x;
    int l = -1, r = -1;
    for (int i = 0 ; i < n - 1; i++){
        if (a[i] > a[i + 1]){
            l = i;
            break;
        }
    }
    if (l == -1){
        cout << "yes\n1 1";
        return 0;
    }
    for (int i = n - 1; i > 0; i--){
        if (a[i] < a[i - 1]){
            r = i;
            break;
        }
    }
    int x = l, y = r;
    while(l < r){
        swap(a[l++],a[r--]);
    }
    for (int i = 0 ; i < n - 1; i++){
        if (a[i] > a[i + 1]){
            cout << "no";
            return 0;
        }
    }
    cout << "yes" << endl;
    cout << x + 1 << " " << y + 1;


}