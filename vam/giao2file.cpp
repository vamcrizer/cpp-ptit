#include<bits/stdc++.h>
using namespace std;
using ll = long long int;
using ld = long double;
using str = string;

void edit(str &a){
	int n = a.size();
	for(int i=0; i<n; i++){
		if(a[i] >= 'A' && a[i] <= 'Z') a[i] += 32;
	}
}

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);

	ifstream file1, file2;
	file1.open("DATA1.in");
	file2.open("DATA2.in");

	set<str> hop;
	map<str, int> giao;
	str mot, hai;
	while(file1 >> mot){
		edit(mot);
		hop.insert(mot);
		giao[mot] = 1;
	}
	while(file2 >> hai){
		edit(hai);
		hop.insert(hai);
		if(giao[hai] == 1) giao[hai] = 2;
	}
	for(auto x : hop){
		cout << x << ' ';
	}cout << endl;
	for(auto x : giao){
		if(x.second == 2) cout << x.first << ' ';
	}

	file1.close();
	file2.close();
}
