#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const int MOD = (int)1e9 + 7;
int x[1000000] = {0};


void sinh(int a[], int n, int &ok){
        int i = n - 1;
        while(i >= 1 && a[i] < a[i + 1]){ //321 312 231 213 132 123
            i--;
        }
        if (i == 0){
            ok = 0;
        } else {
            int j = n;
            while(a[i] < a[j]){
                j--;
            }
            swap(a[i], a[j]);
            reverse(a + i + 1, a + n + 1);
        }
}
int main(){
    int t; cin >> t;
    while(t--){
        int ok = 1;
        int n; cin >> n;
        int a[1005];
        for (int i = 1; i <= n; i++){
            a[i] = i;
        }
        reverse(a + 1, a + n + 1);
        while(ok){
            for (int i = 1; i <= n; i++){
                cout << a[i];
            }
            cout << " ";
            sinh(a, n, ok);
        }
        cout << endl;
    }
}