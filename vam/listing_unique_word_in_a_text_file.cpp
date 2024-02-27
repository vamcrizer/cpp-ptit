#include <fstream>
#include <string>
#include <iostream>
#include <algorithm>
#include <bits/stdc++.h>
#include <map>

bool isPunctuation(char c) {
    return c == ',' || c == '.' || c == '?' || c == '!' || c == ':' || c == ';' || c == '-' || c == '/' || c == '(' || c == ')';
}

int main() {
    std::ifstream file("DATA.in");
    std::string line;
    std::map<std::string, int> wordCount;

    while (std::getline(file, line)) {
        line.erase(std::remove_if(line.begin(), line.end(), isPunctuation), line.end());
        std::istringstream iss(line);
        std::string word;
        while (iss >> word) {
            wordCount[word]++;
        }
    }

    for (const auto& pair : wordCount) {
        std::cout << pair.first << ": " << pair.second << '\n';
    }

    return 0;
}
