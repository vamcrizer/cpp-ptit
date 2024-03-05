#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const int MOD = (int)1e9 + 7;

bool vowels(char c){
    return c == 'A' || c == 'E';
}
bool check(string s){
    for (int i = 1; i <= s.length() - 2; i++){
        if (vowels(s[i]) && !vowels(s[i + 1]) && !vowels(s[i - 1])){
            return false;
        }
    }
    return true;
}

int main(){
    char c; cin >> c;
    string s = "";
    for (int i = 'A'; i <= c; i++){
        s+=i;
    }
    do{
        if(check(s)){
            cout << s << endl;
        }
    } while(next_permutation(s.begin(), s.end()));
}