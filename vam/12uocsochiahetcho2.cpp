#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
    int t; cin >> t;
    while(t--){
        int cnt = 0;
        int n; cin >> n;
        for (int i = 1; i <= sqrt(n); i++){
            if (n % i == 0){
                if (i % 2 == 0){
                    cnt++;
                }
                if (n / i % 2 ==0){
                    cnt++;
                }
                if (n / i == i && i % 2 == 0){
                    cnt--;
                }
            }
        }
        cout << cnt << endl;
    }
}