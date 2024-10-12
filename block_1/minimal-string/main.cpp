#include <iostream>
#include <string>

using namespace std;

string string_comparison(string word1, string word2, string word3) {
    string min_str = word1;
    if (word2 < min_str) {min_str = word2;}
    if (word3 < min_str) {min_str = word3;}

    return min_str;
}

int main() {
    string first_word, second_word, third_word;
    cin >> first_word >> second_word >> third_word;
    cout << string_comparison(first_word, second_word, third_word) << endl;
    return 0;
}
