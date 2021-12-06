#include <vector>
#include <algorithm>

using namespace std;

vector<int> reversed(const vector<int> &v)
{
    vector<int> res = v;
    reverse(res.begin(), res.end());
    return res;
}