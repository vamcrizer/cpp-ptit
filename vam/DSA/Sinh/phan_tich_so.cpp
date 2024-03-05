#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const int MOD = (int)1e9 + 7;
int a[1000], n, ok;
int cnt;
void init(){
    cnt = 1;
    a[1] = n;
}

void sinh(){
    int i = cnt;
    while(i >= 1 && a[i] == 1){
        i--;
    }
    if (i == 0){
        ok = 0;
    } else {
        a[i]--;
        int thieu = cnt - i + 1;
        int x = thieu / a[i];
        int y = thieu % a[i];
        cnt = i;
        for (int j = 1; j <= x; j++){
            a[cnt + 1] = a[i];
            cnt++;
        }
        if (y){
            a[cnt + 1] = y;
            cnt++;
        }

    }
}
int main(){
    cin >> n;
    init();
    ok = 1;
    while(ok){
        for (int i = 1; i <= cnt; i++){
            cout << a[i] << " ";
        }
        cout << endl;
        sinh();
    }
    
}