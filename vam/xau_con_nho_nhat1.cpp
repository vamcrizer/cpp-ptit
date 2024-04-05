#include<bits/stdc++.h>
using namespace std;
using ll = long long int;
using ld = long double;
using str = string;

bool check(string a, string b){
    map<char,int> mp;
    for (int i = 0; i < a.length(); i++){
        mp[a[i]]++;
    }
    for (auto x : b){
        if (mp[x] == 0){
            return false;
        }
    }
    return true;
}

bool cmp(string a, string b){
    return a.length() < b.length();
}

int main(){
    int t; cin >> t;
    while(t--){
    vector<string> res;
    string a, b; cin >> a >> b;
    for (int i = 0; i < a.length(); i++){
        if (b.find(a[i]) != string::npos){
            for (int j = i + 1; j < a.length(); j++){
                if (b.find(a[j]) != string::npos){
                    string tmp = a.substr(i, j + 1);
                    if (check(tmp, b)){
                        res.push_back(tmp);
                    }
                }
            }
        }
    }
    stable_sort(res.begin(), res.end(), cmp);
    if (res.size() == 0){
        cout << -1 << endl; 
    } else {
    cout << res[0] << endl;
    }
    }
}
