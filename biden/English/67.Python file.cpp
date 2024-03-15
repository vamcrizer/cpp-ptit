#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	string files;
	getline(cin, files);
	int length = files.size();
	if(files[length - 3] == '.' && tolower(files[length - 2]) == 'p' && tolower(files[length - 1]) == 'y'){
		cout << "yes";
	} else cout << "no";
	// Biden
	return 0;
}

