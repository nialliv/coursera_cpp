#pragma once
#include <istream>
#include <ostream>
#include <sstream>

struct Duration {
    int hour;
    int minute;
};

Duration ReadDuration (std::istream& stream);
void PrintDuration (std::ostream& stream, Duration& duration);
std::ostream& operator<<(std::ostream& stream, const Duration& duration);
