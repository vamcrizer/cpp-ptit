#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    getchar();
    while(t--){
    string a;
    getline(cin, a);
    int start = 0;
    int correct = 0;
    stringstream ss(a);
    string dap_an;
    while(ss >> a){
        if (a == "101"){
            dap_an = "ABBADCCABDCCABD";
        } else if (a == "102")
            dap_an = "ACCABCDDBBCDDBB";
        if (a != "101" && a != "102"){
            if (a == dap_an.substr(start++, 1)){
                correct++;
            }
        }
    }
    cout << fixed << setprecision(2) << 1.0 * correct / 15 * 10 << endl;
    }
}