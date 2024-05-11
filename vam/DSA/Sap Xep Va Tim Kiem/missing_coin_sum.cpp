#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
    ios_base::sync_with_stdio(0); 
    cin.tie(NULL);cout.tie(NULL);
    int n; cin >> n;
    int a[n];
    for (auto &x : a) cin >> x;
    sort(a, a + n);
    ll sum = 1;
    for (int i = 0; i < n; i++){
        if (a[i] > sum) break;
        sum += a[i];
    }
    cout << sum << endl;
}