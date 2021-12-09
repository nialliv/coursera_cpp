#include <iostream>
#include "duration.h"
#include <string>

using namespace std;

int main() {
    stringstream dur_ss("01:50");
    Duration dur1 = ReadDuration(dur_ss);
    cout << dur1 << endl;
    return 0;
}
