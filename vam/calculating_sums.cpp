#include <fstream>
#include <sstream>
#include <string>
#include <iostream>
#include <limits.h>
using ll = long long;
using namespace std;
int main() {
    ifstream file;
    file.open("DATA.in");
    ll value = 0;
    string word;
    while (file >> word) {
        std::stringstream ss(word);
        ll num;
        if (ss >> num) {
            value += num;
        }
    }
    cout << value;
    return 0;
}