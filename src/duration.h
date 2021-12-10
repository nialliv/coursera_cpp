#pragma once
#include <istream>
#include <iterator>
#include <ostream>
#include <sstream>

struct Duration {
    int hour;
    int minute;
    Duration(int=0,int=0);
    Duration operator+ (const Duration& destination) const;
};

std::istream& operator>> (std::istream& stream, Duration& duration);
std::ostream& operator<<(std::ostream& stream, const Duration& duration);
