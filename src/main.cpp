#include <iostream>
#include "duration.h"
#include <string>

using namespace std;

int main() {
    stringstream dur_ss("01:50");
    Duration dur1;
    Duration dur2 {0, 5};
    dur_ss >> dur1;
    cout << dur1 + dur2 << endl;
    return 0;
}
