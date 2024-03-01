// LonggVu.
#include<bits/stdc++.h>
using namespace std;
using ll = long long int;
using ld = long double;
using str = string;



int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	char a[12345], b[123];
	fgets(a, 12345, stdin);
	fgets(b, 123, stdin);
	a[strlen(a) - 1] = '\0';
	b[strlen(b) - 1] = '\0';
	char *tu = strtok(a, " ");
	while(tu != NULL){
		if(strcmp(tu, b) != 0) cout << tu << ' ';
		tu = strtok(NULL, " ");
	}
}