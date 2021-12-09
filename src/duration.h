#pragma once
#include <istream>
#include <ostream>
#include <sstream>

struct Duration {
    int hour;
    int minute;
    Duration(int=0,int=0);
};

std::istream& operator>> (std::istream& stream, Duration& duration);
std::ostream& operator<<(std::ostream& stream, const Duration& duration);
