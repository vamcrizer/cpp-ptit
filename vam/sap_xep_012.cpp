#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        int a[n];
        multiset<int> se;
        for (auto &x : a){
            cin >> x;
            se.insert(x);
        }
        for (auto x : se){
            cout << x << " ";
        }
    cout << endl;
    }
}