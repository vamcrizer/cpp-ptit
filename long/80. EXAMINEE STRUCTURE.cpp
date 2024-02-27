#include<bits/stdc++.h>
using namespace std;
using ll = long long int;
using ld = long double;
using str = string;
struct Examinee{
	str ten, dob;
	ld x, y, z, sum;
};
typedef struct Examinee hs;
void input(hs &n){
	getline(cin, n.ten);
	cin >> n.dob >> n.x >> n.y >> n.z;
	n.sum = n.x + n.y + n.z;
}
void print(hs &n){
	cout << n.ten << ' ' << n.dob << ' ' << fixed << setprecision(1) << n.sum;
}
int main(){
    struct Examinee A;
    input(A);
    print(A);
    return 0;
}