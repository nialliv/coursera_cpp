#include <iostream>
#include <string>
#include "students.h"

using namespace std;

int main() {
    Students studs;
    string name, lastname, command;
    int day, month, year;
    int n, m, id;
    cin >> n;
    if (n > 0 && n < 10000) {
        while (n > 0) {
            cin >> name >> lastname >> day >> month >> year;
            studs.add_student(name, lastname, day, month, year);
            --n;
        }
        cin >> m;
        if (m > 0 && m < 10000 ) {
            while (m > 0) {
                cin >> command >> id;
                if (command == "name") {
                    cout << studs.getStudentById(id) << endl;
                } else if (command == "date") {
                    cout << studs.getDateById(id) << endl;
                } else {
                    cout << "bad request" << endl;
                }
                --m;
            }
        }

    }
return 0;
}
