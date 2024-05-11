#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
    ios_base::sync_with_stdio(0); 
    cin.tie(NULL);cout.tie(NULL);
    int n; int x;
    cin >> n >> x;
    int a[n];
    for (auto &x : a) cin >> x;
    int l = 0, r = n - 1;
    int ans = 0;
    while(l < r){
        if (a[l] + a[r] <=x){
            ans++;
            l++,r--;
        } else {
            ans++;
            r--;
        }
    }
    if (l == r) ans++;
    cout << ans;
}