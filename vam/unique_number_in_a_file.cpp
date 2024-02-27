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
    string word;
    int X[1001] = {0};
    while (file >> word) {
        stringstream ss(word);
        int num;
        if (ss >> num) {
            X[num]++;
        }
    }
    for (int i = 0; i < 1001; i++){
        if (X[i] != 0){
            cout << i << " " << X[i] << endl;;
        }
    }
    return 0;
}
