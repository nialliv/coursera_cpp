#include <string>
#include <vector>
#include <algorithm>

using namespace std;

class SortedStrings
{
public:
    void AddString(const string &s)
    {
        words.push_back(s);
    }
    vector<string> GetSortedStrings()
    {
        sort(words.begin(), words.end());
        return words;
    }

private:
    vector<string> words;
};