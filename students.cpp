#include "students.h"
#include <string>

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
