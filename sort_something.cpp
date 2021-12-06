#include <algorithm>
#include <vector>
#include <string>

std::vector<int> sort_nums(const std::vector<int> &v)
{
    std::vector<int> result = v;
    std::sort(result.begin(), result.end(), [](int a, int b)
              {
                  if (abs(a) < abs(b))
                  {
                      return true;
                  }
                  return false;
              });
    return result;
}


std::vector<std::string> sort_strings(const std::vector<std::string> &v)
{
    std::vector<std::string> result = v;

    std::sort(result.begin(), result.end(), [](std::string a, std::string b)
              {
                  if (a < b)
                  {
                      return true;
                  }
                  return false;
              });
    return result;
}