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

	ifstream file;
	file.open("VANBAN.in");

	set<str> s;
	str tmp;
	while(file >> tmp){
		edit(tmp);
		s.insert(tmp);
	}
	for(auto x : s){
		cout << x << endl;
	}

	file.close();
}
