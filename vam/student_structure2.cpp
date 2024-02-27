#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const int MOD = (int)1e9 + 7;

int start = 1;

struct Student{
    string id;
    string name;
    string lop;
    string date;
    float gpa;
};

void standardlize(string &a){
    transform(a.begin(), a.end(), a.begin(), ::tolower);
    a[0] = toupper(a[0]);
}

string standardlize_name(string name){
    stringstream ss(name);
    string ten;
    vector<string> hoten;
    while(ss >> ten){
        hoten.push_back(ten);
    }
    for (auto &x : hoten){
        standardlize(x);
    }
    name = "";
    for (auto x : hoten){
        name += x + " ";
    }
    name.pop_back();
    return name;
}

string standardlize_date(string date){
    vector<string> ve;
    for (int i = 0; i < (date).length(); i++){
        if (date[i] == '/'){
            date[i] = ' ';
        }
    }
    stringstream ss(date);
    string word;
    while(ss >> word){
        ve.push_back(word);
    }
    if (ve[0].length() < 2){
        ve[0].insert(0, 1, '0');
    }
    if (ve[1].length() < 2){
        ve[1].insert(0, 1, '0');
    }
    date = "";
    date = ve[0] + "/" + ve[1] + "/" + ve[2];
    return date;
}

void input(struct Student *a, int n){
    cin.ignore();
    for (int i = 0; i < n; i++){
        int tmp = start++;
        if (tmp < 10){
        a[i].id = '0' + to_string(tmp);
        } else {
            a[i].id = to_string(tmp);
        }
        getline(cin, a[i].name);
        a[i].name = standardlize_name(a[i].name);
        cin >> a[i].lop;
        cin >> a[i].date;
        a[i].date = standardlize_date(a[i].date);
        cin >> a[i].gpa;
        cin.ignore();
    }
}

void print(struct Student a[], int n){
    for (int i = 0; i < n; i++){
        cout << "B20DCCN0" << a[i].id << " " << a[i].name << " " << a[i].lop << " " << a[i].date << fixed << " " << setprecision(2) << a[i].gpa;
        cout << endl;
    }
}

int main(){
    struct Student lst[50];
    int N;
    cin >> N;
    input(lst, N);
    print(lst, N);
    return 0;
}