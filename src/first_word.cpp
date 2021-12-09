#include <iostream>
#include <string>
#include <vector>

using namespace std;

vector<string> line_to_vector(string line)
{
    string word;
    vector<string> words;
    for (int i = 0; i < line.length(); i++)
    {
        if (line[i] == ' ' || line[i] == '\t' || line[i] == '\n')
        {
            words.push_back(word);
            word = "";
        }
        else
            word.push_back(line[i]);
    }
    words.push_back(word);
    return words;
}

string min_string_from_vector(const vector<string> &ws)
{
    string result = ws[0];

    for (int i = 0; i < ws.size(); i++)
        if (result > ws[i])
            result = ws[i];

    return result;
};