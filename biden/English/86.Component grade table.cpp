#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

struct Student{
	string id;
	string name;
	string classes;
	double sc1, sc2, sc3;
};

void input(Student &x){
	scanf("\n");
	cin >> x.id;
	scanf("\n");
	getline(cin, x.name);
	scanf("\n");
	cin >> x.classes >> x.sc1 >> x.sc2 >> x.sc3;
}

bool cmpfunc(Student x, Student y){
	return x.name < y.name;
}

void print(Student *x, int n){
	for(int i = 0; i < n; i++){
		cout << i + 1 << " " << x[i].id << " " << x[i].name << " " << x[i].classes << " ";
		cout << fixed << setprecision(1) << x[i].sc1 << " " << x[i].sc2 << " " << x[i].sc3 << endl;
	}
}

int main(){
//	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
	int n;
	cin >> n;
	Student a[n];
	for(int i = 0; i < n; i++){
		input(a[i]);
	}
	sort(a, a + n, cmpfunc);
	print(a, n);
	// Biden
	return 0;
}
