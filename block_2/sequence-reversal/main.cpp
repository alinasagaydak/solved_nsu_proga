#include <vector>
#include <iostream>

#include "reversal.h"

int main() {
    std::vector<int> numbers = {1, 5, 3, 4, 2};
    Reverse(numbers);
    for (auto n : numbers)
        std::cout << n << ' ';
    std::cout << std::endl;

    auto numbers2 = CopyReverse(numbers);
    for (auto n : numbers2)
        std::cout << n << ' ';
    std::cout << std::endl;

    return 0;
}
