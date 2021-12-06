#include <string>
#include <algorithm>

bool isPalindrom(std::string &word)
{
    std::string reversed = word;
    reverse(reversed.begin(), reversed.end());
    return reversed == word;
}