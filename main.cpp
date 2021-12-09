#include <iostream>
#include <vector>
#include <string>

using namespace std;

struct student {
    std::string name;
    std::string lastname;
    int day;
    int month;
    int year;
};

class Students {
  private:
    std::vector<student> vec_studs;
  public:
    void add_student(
        const std::string& name,
        const std::string& lastname,
        const int& day,
        const int& month,
        const int& year
    );
    std::string getStudentById(const int& id);
    std::string getDateById(const int& id);

};

void Students::add_student (
    const std::string& name,
    const std::string& lastname,
    const int& day,
    const int& month,
    const int& year
) {
    vec_studs.push_back({name,lastname,day,month,year});
}
std::string Students::getStudentById(const int& id) {
    student s = vec_studs[id - 1];
    return s.name + " " + s.lastname;
}
std::string Students::getDateById(const int &id) {
    student s = vec_studs[id - 1];
    return std::to_string(s.day) + "." + std::to_string(s.month) + "." + std::to_string(s.year);
}

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
