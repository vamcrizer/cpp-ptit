#include <bits/stdc++.h>
using namespace std;
using ll = long long;

bool check(int a[], int n, ll val, int k){
    int cnt = 0;
    ll sum = 0;
    for (int i = 0; i < n; i++){
        if (a[i] > val){
            return false;
        }
        sum += a[i];
        if (sum > val){
            cnt++;
            sum = a[i];
        }
        if (cnt > k){
            return false;
        }
    }
    cnt++;
    return cnt <= k;
}


int main(){
    ios_base::sync_with_stdio(0); 
    cin.tie(NULL);cout.tie(NULL);
    int n, k; cin >> n >> k;
    int a[n];
    for (auto &x : a) cin >> x;
    ll l = 0, r = accumulate(a, a + n, 0ll);
    ll res = -1;
    while(l <= r){
        ll m = (l+r)/2;
        if (check(a,n,m,k)){
            res = m;
            r = m + 1;
        } else {
            l = m - 1;
        }
    }
    cout << res;
}