#include<bits/stdc++.h>
using namespace std;
using ll = long long int;
using ld = long double;
using str = string;
str id = "00001";
struct Employee{
	str ten, gt, dob, add, tax, ctr;
};
typedef struct Employee nv;
void input(nv &n){
	getline(cin, n.ten);
	getline(cin, n.gt);
	getline(cin, n.dob);
	getline(cin, n.add);
	getline(cin, n.tax);
	getline(cin, n.ctr);
}
void print(nv &n){
	cout << id << ' ' << n.ten << ' ' << n.gt << ' ' << n.dob << ' ' << n.add << ' ' << n.tax << ' ' << n.ctr;
}
int main(){
    struct Employee a;
    input(a);
    print(a);
    return 0;
}