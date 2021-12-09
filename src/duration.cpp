#include "duration.h"
#include <iomanip>
#include <ostream>

std::istream& operator>> (std::istream& stream, Duration& duration) {
    stream >> duration.hour;
    stream.ignore(1);
    stream >> duration.minute;
    return stream;
}

std::ostream& operator<< (std::ostream& stream, const Duration& duration) {
    stream << std::setfill('0');
    stream << std::setw(2) << duration.hour << ':'
           << std::setw(2) << duration.minute;
    return stream;
}
