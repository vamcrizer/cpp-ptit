#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>
#include <iostream>
typedef long long ll;
using namespace std;
int cmp(const void *a, const void *b){
    char *x = (char*)a;
    char *y = (char*)b;
    if (strcmp(x, y) < 0){
        return - 1;
    } else {
        return 1;
    }
}

int main(){
    int t;
    scanf("%d", &t);
    getchar();
    while(t--){
    char c[200];
    char s[200];
    getline(cin, c);
    getline(cin, c);
    char a[100][100];
    int idx = 0;
    int count[100] = {0};
    char *tok = strtok(c, " ");
    while(tok != NULL){
            strcpy(a[idx++], tok);
        tok = strtok(NULL, " ");
    }
    tok = strtok(s, " ");
    while(tok != NULL){
        for (int i = 0; i < idx; i++){
            if (strcmp(tok, a[i]) == 0){
                count[i]++;
            }
        }
        tok = strtok(NULL, " ");
    }
    int idxb = 0;
    char b[100][100];
    for (int i = 0; i < idx; i++){
        if (count[i] == 0){
            for (int j = i + 1; j < idx; j++){
                if (strcmp(a[i], a[j]) == 0) {
                    count[j]++;
                }
            }
            
        }
    }
    for (int i = 0; i < idx; i++){
        if (count[i] == 0){
            strcpy(b[idxb++], a[i]);
        }
    }
    qsort(b, idxb, sizeof(b[0]), cmp);
    for (int i = 0; i < idxb; i++){
        printf("%s ", b[i]);
    }
    printf("\n");
    }
}