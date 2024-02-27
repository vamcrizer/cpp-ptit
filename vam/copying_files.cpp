#include <fstream>
#include <iostream>
using namespace std;
int main() {
    ifstream inFile("PTIT.in");
    ofstream outFile("PTIT.out");
    char c;
    while (inFile.get(c)) { 
        outFile.put(c); 
    }
    inFile.close();
    outFile.close();

    return 0;
}
