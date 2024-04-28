#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
    ios_base::sync_with_stdio(0); 
    cin.tie(NULL);cout.tie(NULL);
    int m,n; cin >>m;
    int a[m];
    for (auto &x : a) cin >> x;
    cin >> n;
    int b[n];
    for (auto &x : b) cin >> x;
    sort(a, a + m);
    sort(b, b + n);
    int i = 0, j = 0;
    int ans = 0;
    while(i < m && j < n){
        if (abs(a[i]-b[j]) <=1){
            ans++;
            ++i, ++j;
        } else if (a[i] > b[j]){
            j++;
        } else {
            i++;
        }
    }
    cout << ans;
}