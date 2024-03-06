#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

class SinhVien{
	public:
		string id;
		string name;
		string classes;
		string dob;
		double gpa;
		SinhVien();
//		SinhVien(string, string, string, string, double);
		void nhap();
		void xuat();
};

SinhVien::SinhVien(){
	// Implementation
	id = "B20DCCN001";
	name = classes = dob = "";
	gpa = 0;
}

//SinhVien::SinhVien(string id, string name, string classes, string dob, double gpa){
//	this->id = id;
//	this->name = name;
//	this->classes = classes;
//	this->dob = dob;
//	this->gpa = gpa;
//}

void SinhVien::nhap(){
	getline(cin, this->name);
	getline(cin, this->classes);
	getline(cin, this->dob);
	cin >> this->gpa;
	if(this->dob[1] == '/') this->dob.insert(0, "0");
	if(this->dob[4] == '/') this->dob.insert(3, "0");
}

void SinhVien::xuat(){
	cout << this->id << " " << this->name << " " << this->classes << " " << this->dob << " ";
	cout << fixed << setprecision(2);
	cout << this->gpa;
}

int main(){
    SinhVien a;
    a.nhap();
    a.xuat();
	// Biden
	return 0;
}
