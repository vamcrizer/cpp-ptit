#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

struct SinhVien{
	string id;
	string name;
	string classes;
	string dob;
	double gpa;
};

void nhap(SinhVien &Target){
	Target.id = "B20DCCN001";
	getline(cin, Target.name);
	getline(cin, Target.classes);
	getline(cin, Target.dob);
	cin >> Target.gpa;
	if (Target.dob[1] == '/') {
		Target.dob = "0" + Target.dob;
	}
	if (Target.dob[4] == '/') {
		Target.dob.insert(3, "0");
	}
}

void in(SinhVien Target){
	cout << Target.id << " " << Target.name << " " << Target.classes << " " << Target.dob << " ";
	cout << fixed << setprecision(2);
	cout << Target.gpa;
}

int main(){
    struct SinhVien a;
    nhap(a);
    in(a);
	// Biden
	return 0;
}
