#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const int MOD = (int)1e9 + 7;

int main(){
    ios_base::sync_with_stdio(0); 
    cin.tie(NULL);cout.tie(NULL);
    int t; cin >> t;
    while(t--){
    map<int, int> mp, mp2;
    int n; cin >> n;
    int a[n][n];
    for (int i = 0; i < n; i++){
        for (int j = 0; j < n; j++){
            cin >> a[i][j];
        }
    }
    int max1 = 0;
    int max2 = 0;
    for (int i = 0; i < n; i++){
        int sum = 0;
        int sum2 = 0;
        for (int j = 0; j < n; j++){
            sum += a[i][j];
            sum2 += a[j][i];
        }
        mp[i] = sum;
        mp2[i] = sum2;
        if (sum > max1){
            max1 = sum;
        }
        if (sum2 > max2){
            max2 = sum2;
        }
    }
    int step = 0, step2 = 0;
    for (auto it : mp){
        step += max1 - it.second;
    }
    for (auto it2 : mp2){
        step2 += max2 - it2.second;
    }
    cout << max(step, step2) << endl;
    }

}