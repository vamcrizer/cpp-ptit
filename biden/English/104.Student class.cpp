#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

class Student{
	public:
		string id = "B20DCCN001";
		string name;
		string classes;
		string dob;
		double gpa;
		Student(string the, string ank, string dai, double mem);
		friend istream& operator >> (istream &in, Student &a);
		friend ostream& operator << (ostream &out, Student a);
};

Student::Student(string the, string ank, string dai, double mem){
	name = the;
	classes = ank;
	dob = dai;
	gpa = mem;
}

istream& operator >> (istream &in, Student &a){
	getline(cin, a.name);
	getline(cin, a.classes);
	getline(cin, a.dob);
	cin >> a.gpa;
	if(a.dob[1] == '/') a.dob.insert(0, "0");
	if(a.dob[4] == '/')  a.dob.insert(3, "0");
	return in;
}

ostream& operator << (ostream &out, Student a){
	cout << a.id << " " << a.name << " " << a.classes << " " << a.dob << " ";
	cout << fixed << setprecision(2);
	cout << a.gpa;
	return out;
}

int main(){
    Student a("gay", "ass", "nigga", 69420);
    cin >> a;
    cout << a;
	// Biden
	return 0;
}

