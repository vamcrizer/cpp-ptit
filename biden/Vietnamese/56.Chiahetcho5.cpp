#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	int t; cin >> t;
	while(t--){
    	string s;
        cin >> s;
        string cpy = s;
        reverse(cpy.begin(), cpy.end());
        int temp = 0;
        for(int i = 0; i < s.length(); i++){
            if(cpy[i] == '1'){
                if(i % 4 == 0){
                    temp += 1;
                } else if (i % 4 == 1){
                    temp += 2;
                } else if (i % 4 == 2){
                    temp += 4;
                } else if (i % 4 == 3){
                    temp += 3;
                }
            }
        }
        if(temp % 5 == 0 && temp != 0) cout << "Yes" << endl;
        else cout << "No" << endl;
	}
	// Biden
	return 0;
}
