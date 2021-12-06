#include <iostream>
#include <string>
#include "./work_with_files.cpp"

using namespace std;

int main() {
    PrintIntoTheFile("./input.txt");
    WriteFileIntoTheFile("./input.txt", "./output.txt");
    return 0;
}
