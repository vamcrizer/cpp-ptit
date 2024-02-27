#include <stdio.h>
#include <math.h>
typedef long long ll;



int main(){
    int n,m;
    scanf("%d%d", &n, &m);
    int a[n+100][m+100];
    for (int i = 1; i <= n; i++){
        for (int j = 1; j <= m; j++) {
            scanf("%d", &a[i][j]);
        }
    }
    int b[2*n+100][2*m+100];
    for (int i = 1; i <= n; i++){
        for (int j = 1; j <= m; j++){
            b[i-j+n][i+j] = a[i][j];
        }
    }
     for (int i = 1; i <= 2*n; i++){
        for (int j = 1; j <= 2*m; j++){
            printf("%d ", b[i][j]);
        }
        printf("\n");
    }
}