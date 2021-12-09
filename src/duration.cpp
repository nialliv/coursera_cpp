#include "duration.h"
#include <iomanip>
#include <ostream>

Duration ReadDuration (std::istream& stream) {
    int h = 0;
    int m = 0;
    stream >> h;
    stream.ignore(1);
    stream >> m;
    return Duration {h,m};
}

void PrintDuration(std::ostream &stream, Duration& duration) {
    stream << std::setfill('0');
    stream << std::setw(2) << duration.hour << ':'
           << std::setw(2) << duration.minute;
}

std::ostream& operator<< (std::ostream& stream, const Duration& duration) {
    stream << std::setfill('0');
    stream << std::setw(2) << duration.hour << ':'
           << std::setw(2) << duration.minute;
    return stream;
}
