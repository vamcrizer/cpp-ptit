#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <ctype.h>
typedef long long ll;

int sum_of_digit(ll n){
    int sum = 0;
    while(n > 0){
        sum += n % 10;
        n /= 10;
    }
    return sum;
}

int main(){
    ll n;
    scanf("%lld", &n);
    ll tmp = n;
    int sum = 0;
    for (int i = 2; i <= sqrt(n); i++){
        while(n % i == 0){
            sum += sum_of_digit(i);
            n /= i;
        }
    }
    if (n != 1){
            sum += sum_of_digit(n);
        }
    if (sum == sum_of_digit(tmp) && tmp != 0){
        printf("YES");
    } else {
        printf("NO");
    }
}