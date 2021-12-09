#pragma once
#include <string>
#include <vector>

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
