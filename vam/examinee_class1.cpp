#include <bits/stdc++.h>
using namespace std;
using ll = long long;

class ds{
public:
    string name;
    string date;
    double x,y,z;
    ds (string name, string date, double x, double y, double z){
        this->name = name;
        this->date = date;
        this->x =x;
        this->y = y;
        this->z = z;
    }
    double sum(){
        return x + y + z;
    }
};
int main(){
    string name; getline(cin, name);
    string date; getline(cin, date);
    double x,y,z; cin >> x >> y >> z;
    ds A(name, date, x, y, z);
    cout << A.name << " " << A.date << " " << fixed << setprecision(1) << A.sum();
}