#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int start = 1;

class ds{
public:
    string id;
    string name;
    int salary;
    int heso;
    int support;
    int total;
    ds (string id, string name, int salary){
        this->id = id;
        this->name = name;
        this->salary = salary;
        if (id.substr(0, 2) == "HT"){
            this->support = 2000000;
        } else if (id.substr(0, 2) == "HP"){
            this->support = 900000;
        } else if (id.substr(0, 2) == "GV"){
            this->support = 500000;
        }
        string tmp = id.substr(2, 2);
        this->heso = atoi(tmp.c_str());
        this->total = this->heso * this->salary + this->support;
    }
};
int main(){
    string id; cin >> id;
    cin.ignore();
    string name; getline(cin , name);
    int salary; cin >> salary;
    ds A(id, name, salary);
    cout << A.id << " " << A.name << " " << A.heso << " " << A.support << " " << A.total;
    
}