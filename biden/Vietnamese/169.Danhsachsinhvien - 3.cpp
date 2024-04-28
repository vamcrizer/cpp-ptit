#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

struct SinhVien{
	string id;
	string name;
	string classes;
	string dob;
	float gpa;
};

void nameNormalizer(string &s){
	stringstream ss(s);
	string word, res;
	int first = 1;
	while(ss >> word){
		word[0] = toupper(word[0]);
		for(int i = 1; i < word.size(); i++) word[i] = tolower(word[i]);
		if(first) first = 0;
		else res += ' ';
		res += word;
	}
	s = res;
}

void birthdayNormalizer(string &s){
	if(s[2] != '/') s.insert(0, "0");
	if(s[5] != '/') s.insert(3, "0");
}

void nhap(SinhVien *a, int n){
	for(int i = 0; i < n; i++){
		a[i].id = to_string(i + 1);
		if(a[i].id.size() == 1){
			a[i].id.insert(0, "00");
		} else if(a[i].id.size() == 2){
			a[i].id.insert(0, "0");
		}
		a[i].id.insert(0, "B20DCCN");
		cin.ignore();
		getline(cin, a[i].name);
		cin >> a[i].classes >> a[i].dob >> a[i].gpa;
	}
}

bool cmp(SinhVien a, SinhVien b){
	return a.gpa > b.gpa;
}

void sapxep(SinhVien *a, int n){
	sort(a, a + n, cmp);
}

void in(SinhVien *a, int n){
	for(int i = 0; i < n; i++){
		nameNormalizer(a[i].name);
		birthdayNormalizer(a[i].dob);
		cout << a[i].id << " " << a[i].name << " " << a[i].classes << " " << a[i].dob << " ";
		cout << fixed << setprecision(2) << a[i].gpa << endl;
	}
}

int main(){
    struct SinhVien ds[50];
    int N;
    cin >> N;
    nhap(ds, N);
    sapxep(ds,N);
    in(ds, N);
	// Biden
	return 0;
}
