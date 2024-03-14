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
		friend istream& operator >> (istream &in, SinhVien &a);
		friend ostream& operator << (ostream &out, SinhVien a);
};

SinhVien::SinhVien(){
	// Implementation
	id = "B20DCCN001";
	name = classes = dob = "";
	gpa = 0;
}

istream& operator >> (istream &in, SinhVien &a){
	getline(cin, a.name);
	getline(cin, a.classes);
	getline(cin, a.dob);
	cin >> a.gpa;
	if(a.dob[1] == '/') a.dob.insert(0, "0");
	if(a.dob[4] == '/')  a.dob.insert(3, "0");
	return in;
}

ostream& operator << (ostream &out, SinhVien a){
	cout << a.id << " " << a.name << " " << a.classes << " " << a.dob << " ";
	cout << fixed << setprecision(2);
	cout << a.gpa;
	return out;
}

int main(){
    SinhVien a;
    cin >> a;
    cout << a;
	// Biden
	return 0;
}
