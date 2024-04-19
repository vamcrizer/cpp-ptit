#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
	ios_base::sync_with_stdio(0); 
    cin.tie(NULL);cout.tie(NULL);
    int t; cin >> t;
    while(t--){
        string a; cin >> a;
        ll res = 0;
        for (int i = 0; i < a.length(); i++){
            if (!isdigit(a[i])){
                a[i] = ' ';
            }
        }
        stringstream ss(a);
        string word;
        while(ss >> word){
            res += stoll(word);
        }
        cout << res << endl;
    }
}
