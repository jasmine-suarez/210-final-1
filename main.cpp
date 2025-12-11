// COMSC-210 | Final 1 | Jasmine Suarez
// IDE used: VS Code

#include <iostream>
#include <fstream>
#include <map>
using namespace std;

void print_in_range()

int main() {
    // Milestone 1
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
        traffic[origin]++;

        if (traffic.find(destination) == traffic.end()) {
            traffic[destination] = 0;
        }
        traffic[destination]++;
    }

    fin.close();

    cout << "All airport traffic counts:\n";
    for (auto& pair : traffic)
        cout << pair.first << " " << pair.second << endl;

    cout << endl;

    // Milestone 2
    int maxCount = 0;
    for (auto& pair : traffic) {
        if (pair.second > maxCount) {
            maxCount = pair.second;
        }
    }

    cout << "Busiest airport(s) with count " << maxCount << ":\n";
    for (auto& pair : traffic) {
        if (pair.second == maxCount) {
            cout << pair.first << " " << pair.second << endl;
        }
    }
    cout << endl;

    // Milestone 3



    cout << "Airports with traffic in range [5, 8]:\n";



    return 0;
}