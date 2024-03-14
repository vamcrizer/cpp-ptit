#include <bits/stdc++.h>
#include <vector>
using namespace std;
typedef long long ll;

int main(){
    string s;
    getline(cin, s);
    vector<string> a;
    stringstream ss(s);
    string p;
    while(ss >> p){
        a.push_back(p);
    }
    for(int i = 0; i < a.size(); i++){
        for(int j = 0; j < a[i].size(); j++){
            a[i][j] = tolower(a[i][j]);
        }
    }
	cout << a[a.size() - 1];
    for (int i = 0; i < a.size() - 1; i++){
        cout << a[i][0];
    }
    cout << "@ptit.edu.vn";
    // Biden
}
