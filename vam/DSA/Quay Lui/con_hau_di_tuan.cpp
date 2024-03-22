#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const int MOD = (int)1e9 + 7;

// Cho một bàn cờ vua kích thước NxN, hãy xếp K con hậu trên bàn cờ đó sao cho không có con hậu nào ăn nhau
int a[100], d1[100], d2[100], cot[100];
int n;

void ktao(){
    memset(cot, 0, sizeof(cot));
    memset(d1, 0, sizeof(d1));
    memset(d2, 0, sizeof(d2));
}
void Try(int i){
    for (int j = 1; j <= n; j++){
        if (cot[j] == 0 && d1[i - j + n] == 0 && d2[i + j - 1] == 0){
            a[i] = j;
            cot[j] = 1;
            d1[i - j + n] = 1;
            d2[i + j - 1] = 1;
            if (i == n){
                for (int k = 1; k <= n; k++){
                    cout << "Hang: " << k << " " << "Cot: " << a[k] << endl;
                }
                cout << endl;
            }
            Try(i + 1);
            cot[j] = 0;
            d1[i - j + n] = 0;
            d2[i + j - 1] = 0;
        }
    }
}

int main(){
    cin >> n;
    ktao();
    Try(1);
}