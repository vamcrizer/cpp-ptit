#include <bits/stdc++.h>
using namespace std;
using ll = long long;

class ds{
public:
    string id;
    string name;
    double bonus;
    double x,y,z;
    ds (string id, string name, double x, double y, double z){
        this->id = id;
        this->name = name;
        this->x = 2*x;
        this->y = y;
        this->z = z;
        if (id[2] == '1'){
            bonus = 0.5;
        } else if (id[2] == '2'){
            bonus = 1;
        } else if (id[2] == '3'){
            bonus = 2.5;
        }

    }
    double diem(){
        return x + y + z;
    }
    string check(){
        if(x + y + z + bonus >= 24){
            return "PASSED";
        }else{
            return "FAILED";
        }
    }
};
int main(){
    string id; cin >> id;
    cin.ignore();
    string name; getline(cin, name);
    double x,y,z; cin >> x >> y >> z;
    ds A(id, name, x, y, z);
    cout << A.id << " " << A.name << " " << A.bonus << " " << A.diem() << " " << A.check();
    
}