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

void in(SinhVien *a, int n){
	for(int i = 0; i < n; i++){
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
    in(ds, N);
	// Biden
	return 0;
}
