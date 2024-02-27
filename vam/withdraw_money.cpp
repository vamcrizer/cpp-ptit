 #include <stdio.h>
 #include <math.h>
 #include <string.h>
 #include <stdlib.h>
 #include <ctype.h>

 int main(){
    int t;
    scanf("%d", &t);
    while(t--){
        int n;
        scanf("%d", &n);
        int paper = 0;
        while (n > 0){
            if (n >= 1000){
                while(n >= 1000){
                    paper++;
                    n -= 1000;
                }
            }
            if (n >= 500){
                while(n >= 500){
                    paper++;
                    n -= 500;
                }
            }
            if (n >= 200){
                while(n >= 200){
                    paper++;
                    n -= 200;
                }
            }
            if (n >= 100){
                while(n >= 100){
                    paper++;
                    n -= 100;
                }
            }
            if (n >= 50){
                while(n >= 50){
                    paper++;
                    n -= 50;
                }
            }
            if (n >= 20){
                while(n >= 20){
                    paper++;
                    n -= 20;
                }
            }
            if (n >= 10){
                while(n >= 10){
                    paper++;
                    n -= 10;
                }
            }
            if (n >= 5){
                while(n >= 5){
                    paper++;
                    n -= 5;
                }
            }
            if (n >= 2){
                while(n >= 2){
                    paper++;
                    n -= 2;
                }
            }
            if (n >= 1){
                while(n >= 1){
                    paper++;
                    n -= 1;
                }
            }
        }
        printf("%d\n", paper);
    }
 }