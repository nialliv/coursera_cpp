#include <string>
#include <map>
#include <vector>
#include <algorithm>

using namespace std;

struct full_name
{
    string first_name;
    string last_name;
};

class Person
{
public:
    void ChangeFirstName(int year, const string &first_name)
    {
        data[year].first_name = first_name;
    }
    void ChangeLastName(int year, const string &last_name)
    {
        data[year].last_name = last_name;
    }
    string GetFullName(int year)
    {
        string fname;
        string lname;
        for (const pair<int, full_name> &i : data)
        {
            if (i.first <= year && !(i.second.first_name.empty()))
                fname = i.second.first_name;
            if (i.first <= year && !(i.second.last_name.empty()))
                lname = i.second.last_name;
        }
        if (fname.empty() && lname.empty())
            return "Incognito";
        else if (!(fname.empty()) && lname.empty())
            return fname + " with unknown last name";
        else if (fname.empty() && !(lname.empty()))
            return lname + " with unknown first name";
        else
            return fname + " " + lname;
    }

private:
    map<int, full_name> data;
};