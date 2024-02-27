#include<bits/stdc++.h>
using namespace std;
using ll = long long int;
using ld = long double;
using str = string;

str ma = "000";
struct Employee{
	str id, ten, gt, dob, add, tax, ctr;
};
typedef struct Employee nv;
int x = 1;
int cnt(int n){
	int res = 0;
	while(n){
		++res;
		n /= 10;
	}return res;
}
void solve(str &a){
	a += ma;
	int tmp = cnt(x);
	for(int i=1; i<=2 - tmp; i++){
		a += "0";
	}a += to_string(x);
	++x;
}
void input(nv &n){
	cin.ignore();
	getline(cin, n.ten);
	cin >> n.gt >> n.dob;
	cin.ignore();
	getline(cin, n.add);
	cin >> n.tax >> n.ctr;
	solve(n.id);
}
void printlist(nv a[], int n){
	for(int i=0; i<n; i++){
		cout << a[i].id << ' ' << a[i].ten << ' ' << a[i].gt << ' ' << a[i].dob << ' ' << a[i].add << ' ' << a[i].tax << ' ' << a[i].ctr << endl;
	}
}
int main(){
    struct Employee lst[50];
    int N; cin >> N;
    for(int i=0; i<N; i++) input(lst[i]);
    printlist(lst, N);
    return 0;
}