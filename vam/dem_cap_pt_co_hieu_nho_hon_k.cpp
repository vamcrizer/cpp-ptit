#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const int MOD = (int)1e9 + 7;
const int MX = 1e5;

int a[MX + 5];
int n, k;
int main(){
    cin >> n >> k;
    for (int i = 0; i < n; i++){
        cin >> a[i];
    }
    int cnt = 0;
    sort(a, a+n);
    for (int i = 0; i < n; i++){
        auto it = lower_bound(a + i, a + n, k + a[i]) - 1;
        cnt += it - (a + i);
        if (a[it - a] == a[i]){
            cnt--;
        }   
    }
    cout << cnt;
}