#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
	ios_base::sync_with_stdio(0); 
    cin.tie(NULL);cout.tie(NULL);
    int t; cin >> t;
    while(t--){
        string a; cin >> a;
        for (int i = 0; i < a.length(); i++){
            if (a[i] >= 97 && a[i] <= 122){
                a[i] = ' ';
            }
        }
        stringstream ss(a);
        string word;
        vector<ll> ve;
        while(ss >> word){
            ve.push_back(stoll(word));
        }
    }
}