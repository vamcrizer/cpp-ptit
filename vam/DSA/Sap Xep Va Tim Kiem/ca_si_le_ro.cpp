#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
    int n; cin >> n;
    pair<int,int> a[n];
    for (int i = 0; i < n; i++){
        cin >> a[i].first >> a[i].second;
    }
    sort(a, a + n, [](pair<int,int> a, pair<int,int> b){
        return a.second < b.second;
    });
    ll res = 1;
    int end_time = a[0].second;
    for (int i = 1; i < n; i++){
        if (a[i].first > end_time){
            res++;
            end_time = a[i].second;
        }
    }
    cout << res;
}