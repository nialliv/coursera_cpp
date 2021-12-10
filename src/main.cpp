#include <iostream>
#include "duration.h"
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

void printVec (const vector<Duration>& vd) {
    for (const Duration& i : vd) {
        cout << i << " ";
    }
    cout << endl;
}

int main() {
    stringstream dur_ss("01:88");
    Duration dur1;
    Duration dur2 {0, 50};
    Duration dur3 {5, 30};
    dur_ss >> dur1;
    vector<Duration> vec_dur {
        dur3, dur2, dur1
    };
    printVec(vec_dur);
    sort(vec_dur.begin(), vec_dur.end());
    printVec(vec_dur);
    sort(vec_dur.begin(), vec_dur.end(), [](Duration a, Duration b) {
            return a > b;
            });
    printVec(vec_dur);
    return 0;
}
