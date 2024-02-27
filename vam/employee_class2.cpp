#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int start = 1;

class ds{
public:
    string id;
    string name;
    int salary;
    int workday;
    int bonus;
    int support;
    int sum;
    string position;
    ds (string name, int salary, int workday, string position){
        this->id = "NV";
        int tmp = start++;
        if (start < 10){
            this->id += '0' + to_string(tmp);
        } else {
            this->id += to_string(tmp);
        }
        this->name = name;
        this->salary = salary;
        this->workday = workday;
        this->salary = this->workday * this->salary;
        if (workday >= 25){
            this->bonus = this->salary / 100 * 20;
        } else if (workday >= 22 && workday < 25){
            this->bonus = this->salary / 100 * 10;
        } else {
            this->bonus = 0;
        }
        if (position == "GD"){
            this->support = 250000;
        } else if (position == "PGD"){
            this->support = 200000;
        } else if (position == "TP"){
            this->support = 180000;
        } else if (position == "NV"){
            this->support = 150000;
        }
        this->sum = this->salary + this->bonus + this->support; 
    }
};
int main(){
    string name; getline(cin, name);
    int salary; cin >> salary;
    int workday; cin >> workday;
    string position; cin >> position;
    ds A(name, salary, workday, position);
    cout << A.id << " " << A.name << " " << A.salary << " " << A.bonus << " " << A.support << " " << A.sum;

    
}