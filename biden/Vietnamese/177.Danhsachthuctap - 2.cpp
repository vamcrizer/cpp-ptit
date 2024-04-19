#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

struct Student{
	int idx;
	string id;
	string name;
	string classes;
	string email;
	string corp;
};

void input(Student &a, int i){
	a.idx = i;
	getline(cin, a.id);
	getline(cin, a.name);
	getline(cin, a.classes);
	getline(cin, a.email);
	getline(cin, a.corp);
}

void output(Student *a, int n, string s){
	for(int i = 0; i < n; i++){
		if(a[i].corp == s)
			cout << a[i].idx << " " << a[i].id << " " << a[i].name << " " << a[i].classes << " " << a[i].email << " " << a[i].corp << endl;
	}
}

bool cmp(Student &a, Student &b){
	return a.id < b.id;
}

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	int n; cin >> n;
	cin.ignore();
	Student a[n];
	for(int i = 0; i < n; i++) input(a[i], i + 1);
	sort(a, a + n, cmp);
	int t; cin >> t;
	while(t--){
		string s;
		cin >> s;
		output(a, n, s);
	}
	// Biden
	return 0;
}
