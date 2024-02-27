#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const int MOD = (int)1e9 + 7;

string check(int a[], int n, int l, int r){
    int increase = 0;
    if (a[l] > a[l+1]){
        return "No\n";
    } else {
        increase = 1;
    }
    int ok = 0;
    for (int i = l + 1; i <= r; i++){
        if (a[i] < a[i - 1] || a[i] > a[i - 1]){
            ok = 1;
        }
        if (a[i] < a[i - 1] && increase == 1){
            increase = 0;
        }
        if (a[i] > a[i - 1] && increase == 0){
            return "No\n";
        }
    }
    if (!ok){
        return "No\n";
    }
    return "Yes\n";
}

int main(){
    ios_base::sync_with_stdio(0); 
    cin.tie(NULL);cout.tie(NULL);
    int t; cin >> t;
    while(t--){
    int n; cin >> n;
    int a[n];
    for (int i = 0; i < n; i++){
        cin >> a[i];
    }
    int l, r; cin >> l >> r;
    cout << check(a, n, l, r);
    }
}