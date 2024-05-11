#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
    ios_base::sync_with_stdio(0); 
    cin.tie(NULL);cout.tie(NULL);
    int n,m,k; cin >> n >> m >> k;
    int a[n], b[m];
    for (auto &x : a) cin >> x;
    for (auto &x : b) cin >> x;
    sort(a, a + n);
    sort(b, b + m);
    int i =0, j = 0;
    int ans = 0;
    while(i < n && j < m){
        if (abs(a[i] - b[j]) <= k){
            ans++;
            i++, j++;
        } else if (a[i] - b[j] > k){
            j++;
        } else {
            i++;
        }
    }
    cout << ans;
}