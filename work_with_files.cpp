#include <cstdio>
#include <cstdlib>
#include <fstream>
#include <string>
#include <iostream>
#include <iomanip>

using namespace std;

struct CsvData {
    int lines;
    int rows;
    string strs;
};

void PrintIntoTheFile (const string& path) {
    ifstream input(path);

    if(input.is_open()) {
        string line;
        cout << fixed << setprecision(3);
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

void PrintTableIntoFileCSV (const string& path) {
    ifstream input(path);
    string lines;
    int N, M;
    //подумал. что надо сначала перевести первые 2 параметра из строки в число и сначала сделал так...
    /*getline(input, lines, ' '); //взять строку до пробела
    N = atoi(lines.c_str()); //перевести её в число
    getline(input, lines); //взять оставшееся и
    M = atoi(lines.c_str());*/ //тоже перевести в число
    //но оказалось можно и проще
    input >> N >> M; // )))))
    input.ignore(1); //еще перевод строки остался, его игнорируем(иначе выведется)
    for (int i = N; i > 0;--i) {
        for (int z = M; z > 1; --z) {
            getline(input, lines, ',');
            cout << setw(10) << lines << " ";
        }
        getline(input, lines);
        cout << setw(10) << lines << endl;
    }
}
