#include <bits/stdc++.h>
using namespace std;

long long myAtoi(string s) {
    long long res = 0;
    int minus = 1;
    int i = 0;
    while (i < s.length() && s[i] == ' ') {
        i++;
    }

    if (i < s.length() && (s[i] == '-' || s[i] == '+')) {
        minus = (s[i++] == '-') ? -1 : 1;
    }

    while (i < s.length() && isdigit(s[i])) {
        res = res * 10 + (s[i++] - '0');
    }

    return minus * res;
}


int main(){
    string s = "-91283472332";
    cout << myAtoi(s);
}