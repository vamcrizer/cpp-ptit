#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	string sex;
	getline(cin, sex);
	char cur = sex[0];
	int count = 1, flag = 0;
	for(int i = 1; i < sex.size(); i++){
		if(sex[i] == cur) count++;
		else{
			cur = sex[i];
			count = 1;
		}
		if(count == 7){
			flag = 1;
			break;
		}
	}
	if(flag) cout << "YES";
	else cout << "NO";
	// Biden
	return 0;
}

