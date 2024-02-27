#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <ctype.h>
typedef long long ll;

char s[201];
void reverse(int a[], int n){
    int l = 0, r = n - 1;
    while(l < r){
        int tmp = a[l];
        a[l] = a[r];
        a[r] = tmp;
        ++l, --r;
    }
}

void solve(char a[], char b[]){
    int n1 = strlen(a), n2 = strlen(b), n = 0;
    int x[n1], y[n1], z[n1 + 1];
    char moi[201];
    for (int i = 0; i < n1; i ++){
        x[i] = a[i] - '0';
    }
    for (int i = 0; i < n2; i ++){
        y[i] = b[i] - '0';
    }
    reverse(x, n1);
    reverse(y, n2);
    for (int i = n2; i < n1; i++){
        y[i] = 0;
    }
    int nho = 0;
    for (int i = 0; i < n1; i++){
        int tmp = x[i] + y[i] + nho;
        z[n++] = tmp % 10;
        nho = tmp / 10;
    }
    if (nho){
        z[n++] = nho;
    }
    int new_count = 0;
    for (int i = n - 1; i >= 0; i--){
        printf("%d", z[i]);
        moi[new_count++] = z[i] + '0';
    }
    moi[new_count] = '\0';
    strcpy(s, moi);
}


int main(){
    freopen("DATA.in", "r", stdin);
    scanf("%s", s);
    int n = strlen(s);
    while(n != 1){
        char tmp1[101];
        char tmp2[101];
        int cnt1 = 0;
        int cnt2 = 0;
        for (int i = 0; i < n / 2; i++){
            tmp1[cnt1++] = s[i];
        }
        tmp1[cnt1] = '\0';
        for (int i = n / 2; i < n; i++){
            tmp2[cnt2++] = s[i];
        }
        tmp2[cnt2] = '\0';
        if (strlen(tmp1) >= strlen(tmp2)){
            solve(tmp1, tmp2);
        } else {
            solve(tmp2, tmp1);
        }
        printf("\n");
        n= strlen(s);
    }
}