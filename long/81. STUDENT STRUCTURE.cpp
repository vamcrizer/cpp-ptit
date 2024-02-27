#include<bits/stdc++.h>
using namespace std;
using ll = long long int;
using ld = long double;
using str = string;
str msv = "B20DCCN001";
struct Student{
	str ten, lop, dob;
	ld gpa;
};
typedef struct Student hs;
void input(hs &n){
	getline(cin, n.ten);
	cin >> n.lop >> n.dob >> n.gpa;
	str tmp = n.dob, res;
	if(tmp.size() < 10){
		if(!(tmp[1] >= '0' && tmp[1] <= '9')){
			res += '0';
			res += tmp[0];
			res += '/';
			int pos = 0;
			for(int i=0; i<tmp.size(); i++){
				if(tmp[i]=='/'){
					pos = i+1;
					if(tmp[i+2]=='/'){
						res += '0';
					}break;
				}
			}
			for(int i=pos; i<tmp.size(); i++){
				res += tmp[i];
			}
		}else{
			int pos = 0;
			for(int i=0; i<tmp.size(); i++){
				res += tmp[i];
				if(tmp[i]=='/'){
					if(tmp[i+2]=='/'){
						res += '0';
						pos = i+1;
						break;
					}
				}
			}
			for(int i=pos; i<tmp.size(); i++){
				res += tmp[i];
			}
		}
	}n.dob = res;
}
void print(hs &n){
	cout << msv << ' ' << n.ten << ' ' << n.lop << ' ' << n.dob << ' ' <<	 fixed << setprecision(2) << n.gpa;
}
int main(){
    struct Student a;
    input(a);
    print(a);
    return 0;
}