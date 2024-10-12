#include "removeduplicates.h"
#include <iostream>

int main() {
    std::vector<std::string> s = {"a", "b", "C", "b", "a", "ada", "hello", "a"};
    RemoveDuplicates(s);
    for(auto l: s){
        std::cout << l << '\t';
    }
    std::cout << std::endl;
    return 0;
}