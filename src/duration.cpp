#include "duration.h"
#include <iomanip>
#include <ostream>

Duration::Duration (int hour, int minute) {
    int total = hour * 60 + minute;
    this->hour = total / 60;
    this->minute = total % 60;
}

Duration Duration::operator+(const Duration &destination) const {
    return Duration {this->hour + destination.hour, this->minute + destination.minute};
}

bool Duration::operator>(const Duration &destination) const {
    if(this->hour > destination.hour) {
        return true;
    } else if (this->hour < destination.hour) {
        return false;
    } else {
        if(this->minute > destination.minute) {
            return true;
        } else if(this->minute < destination.minute) {
            return false;
        }
    }
    return false;
}

bool Duration::operator<(const Duration &destination) const {
   return !(Duration::operator>(destination));
}

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
