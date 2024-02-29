#include <bits/stdc++.h>
using namespace std;
using ll = long long;
void sang2(int l, int r){
    int size = r - l + 1;
    int b[size];
    for (int i = 0; i <= r - l; i++){
        b[i] = true;
    }
    for (int i = 2; i <= sqrt(r); i++){
        for (int j = max(i * i,(l + i - 1) / i * i); j <= r; j += i){
            b[j - l] = 0;
        }
    }
    for (int i = max(2, l); i <= r; i++){
        if (b[i - l]){
            cout << i << " ";
        }
    }
}

bool nt(int n ){
    for (int i = 2; i <= sqrt(n); i++){
        if (n % i == 0){
            return false;
        }
    }
    return n > 1;
}
int main(){ 
    int t; cin >> t;
    while(t--){
    int a, b; cin >> a >> b;
    if (b > a){
    for (int i = a; i <= b; i++){
        if (nt(i)){
            cout << i << " ";
        }
           }
    } else {
        for (int i = b; i <= a; i++){
        if (nt(i)){
            cout << i << " ";
        }
           }
    }
    cout << endl;
    }
}