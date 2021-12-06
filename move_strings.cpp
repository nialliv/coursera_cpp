#include <string>
#include <vector>

void move_strings(std::vector<std::string> &source, std::vector<std::string> &destination)
{
    for (int i = 0; i < source.size(); i++)
    {
        destination.push_back(source[i]);
    }
    source.clear();
};