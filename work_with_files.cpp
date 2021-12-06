#include <cstdio>
#include <fstream>
#include <string>
#include <iostream>

using namespace std;

void PrintIntoTheFile (const string& path) {
    ifstream input(path);

    if(input.is_open()) {

        string line;
        while (getline(input, line)) {
            cout << line << endl;
        }

    } else {
        cout << "Error opened file!" << endl;
    }
    input.close();
}

void WriteFileIntoTheFile (const string& source, const string& destination) {
    ifstream input(source);
    ofstream output(destination, ios::app);

    if(input.is_open()) {
        string line;
        if (output.is_open()) {
            while (getline(input, line)) {
                output << line << endl;
            }
        } else {
            cout << "Error opened destination file" << endl;
        }
    } else {
        cout << "Error opened source file" << endl;
    }

    output.close();
    input.close();
}
