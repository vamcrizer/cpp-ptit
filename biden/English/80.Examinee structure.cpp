#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

struct Examinee{
	string name;
	string dob;
	double sc1, sc2, sc3;
};

void input(Examinee &Target){
	getline(cin, Target.name);
	getline(cin, Target.dob);
	cin >> Target.sc1 >> Target.sc2 >> Target.sc3;
}

void print(Examinee Target){
	cout << Target.name << " " << Target.dob << " ";
	cout << fixed << setprecision(1);
	cout << Target.sc1 + Target.sc2 + Target.sc3;
}

int main(){
    struct Examinee A;
    input(A);
    print(A);
	// Biden
	return 0;
}

