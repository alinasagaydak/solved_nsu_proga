#include <map>
#include <string>
#include <cctype>
#include <algorithm>

std::map<char, int> BuildCharCounters(const std::string& word) {
    std::map<char, int> letters;
    uint8_t shift_to_lowercase = 'a' - 'A';
    for(char el : word) {
        if (el < 'a') {el += shift_to_lowercase;}
        if (letters.find(el) == letters.end()) {
            letters[el] = 1;
        }
        else {letters[el] += 1;} 
    }
    return letters;
}

bool AreAnagrams(const std::string& word1, const std::string& word2) {
    std::map<char, int> letters_of_word1 = BuildCharCounters(word1);
    std::map<char, int> letters_of_word2 = BuildCharCounters(word2);

    return letters_of_word1 == letters_of_word2;
}
