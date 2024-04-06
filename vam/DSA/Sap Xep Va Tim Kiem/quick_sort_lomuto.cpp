#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
    int n; cin >> n;
    int a[n];
    for (auto &x : a) cin >> x;
    int i = -1, pivot = a[n - 1];
    for (int j = 0; j < n - 1; j++){
        if (a[j] < pivot){
            i++;
            swap(a[j], a[i]);
        }
    }
    i++; swap(a[i], a[n - 1]);
    for (int i = 0; i < n; i++){
        if (a[i] == pivot){
            cout << "[" << a[i] << "]"; 
        } else {
        cout << a[i];
        }
        cout << " ";
    }
}