#include <iostream>
#include <set>
#include <algorithm> 

using namespace std;

int main() {
   set<string> unique_words;
   int num_of_rows;
   cin >> num_of_rows;
   cin.ignore();
   
   for (size_t i = 0; i < num_of_rows; ++i) {
      string line;
      getline(cin, line);
      unique_words.insert(line);
   }

   cout << unique_words.size();
}