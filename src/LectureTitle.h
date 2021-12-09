#include <string>

struct Specialization {
    std::string value;
    Specialization(std::string s) { value = s; }
};

struct Course{
    std::string value;
    Course(std::string s) { value = s; }
};

struct Week{
    std::string value;
    Week(std::string s) { value = s; }
};

struct LectureTitle {
    std::string specialization;
    std::string course;
    std::string week;
    
    LectureTitle(Specialization specialization, Course course, Week week){
        this->specialization = specialization.value;
        this->course = course.value;
        this->week = week.value;
    }
};

