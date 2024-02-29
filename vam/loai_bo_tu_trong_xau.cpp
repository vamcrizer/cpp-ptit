#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
    string a; getline(cin , a);
    string b; getline(cin, b);
    int pos = a.find(b);
    a.replace(pos, b.length(), "");
    stringstream ss(a);
    string word;
    while(ss >> word)
    {
        cout << word << " ";
    }
}