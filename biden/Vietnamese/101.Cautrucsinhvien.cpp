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

void nhapThongTinSV(SinhVien &Target){
	Target.id = "N20DCCN001";
	getline(cin, Target.name);
	cin >> Target.classes >> Target.dob >> Target.gpa;
	if (Target.dob[1] == '/') {
		Target.dob = "0" + Target.dob;
	}
	if (Target.dob[4] == '/') {
		Target.dob.insert(3, "0");
	}
}

void inThongTinSV(SinhVien Target){
	cout << Target.id << " " << Target.name << " " << Target.classes << " " << Target.dob << " ";
	cout << fixed << setprecision(2);
	cout << Target.gpa;
}

int main(){
    struct SinhVien a;
    nhapThongTinSV(a);
    inThongTinSV(a);
	// Biden
	return 0;
}
