#include <map>
#include <string>

using namespace std;

class Anagram {
    public:
    void setFirst_word (string word) {
        for(int i = 0; i < word.length(); i++) 
            this->first_word[word[i]]++;
    };

    void setSecond_word (string word) {
        for(int i = 0; i < word.length(); i++) 
            this->second_word[word[i]]++;
    };

    bool is_anagram () {
        return first_word == second_word;
    }

    private:
        map<char,int> first_word;
        map<char,int> second_word;
};