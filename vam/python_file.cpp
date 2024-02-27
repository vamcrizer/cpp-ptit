#include <bits/stdc++.h>
using namespace std;

bool check2(char c){
    if (c == '.' || c == '_' || (c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z')){
        return true;
    } else {
        return false;
    }
}

string check(string a){
    if (a.length() < 3) {
        return "no";
    }
    for (int i = 0; i < a.length() - 3; i++){
        if (a[i] >= 'A' && a[i] <= 'Z'){
            a[i] += 32;
        }
        if (!check2(a[i])){
            return "no";
        }
    }
    if (a.substr(a.length() - 3) == ".py" || a.substr(a.length() - 3) == ".PY") {
        return "yes";
    }
    return "no";
}

int main(){
    string a; cin >> a;
    cout << check(a);
}