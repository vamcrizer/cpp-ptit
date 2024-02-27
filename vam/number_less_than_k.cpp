#include<bits/stdc++.h>
using namespace std;

int main(){
    int test; cin>>test;
    while(test--){
        int n, k; cin>>n>>k;
        vector<int> a(n);
        int cnt = 0;
        for (int i = 0; i < n; i++){
            cin >> a[i];
            if (a[i] <= k){
                cnt++;
            }
        }
        int bad = 0;
        for(int i = 0; i < cnt; i++){
            if(a[i] > k){
                bad++;
            }
        }
        int ans = bad;
        for(int i = 0, j = cnt; j < n; i++, j++){ // 2 1 5 6 3 4
            if(a[i] > k){
                bad--;
            }
            if(a[j] > k){
                bad++;
            }
            ans = min(ans, bad);
        }
        cout << ans << endl;
    }
    return 0;
}
