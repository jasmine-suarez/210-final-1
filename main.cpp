// COMSC-210 | Final 1 | Jasmine Suarez
// IDE used: VS Code

#include <iostream>
#include <fstream>
#include <map>
using namespace std;

int main() {
    map<string, int> traffic;

    ifstream fin;
    fin.open("210-final-1-FA25.txt");
    if (!fin.good()) {
        cout << "Error! File not found. Exiting program...\n";
        return 0;
    }

    string origin, destination;
    while (fin >> origin >> destination) {
        if (traffic.find(origin) == traffic.end()) {
            traffic[origin] = 0;
        }

        if (traffic.find(destination) == traffic.end()) {
            traffic[destination] = 0;
        }
    }

    fin.close();

    cout << "TEST: TRAFFIC REPORT\n";


    return 0;
}