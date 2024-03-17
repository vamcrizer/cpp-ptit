#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

struct ThiSinh{
	string name;
	string dob;
	double sc1, sc2, sc3;
};

void nhap(ThiSinh &Target){
	getline(cin, Target.name);
	getline(cin, Target.dob);
	cin >> Target.sc1 >> Target.sc2 >> Target.sc3;
}

void in(ThiSinh Target){
	cout << Target.name << " " << Target.dob << " ";
	cout << fixed << setprecision(1);
	cout << Target.sc1 + Target.sc2 + Target.sc3;
}

int main(){
    struct ThiSinh A;
    nhap(A);
    in(A);
	// Biden
	return 0;
}

