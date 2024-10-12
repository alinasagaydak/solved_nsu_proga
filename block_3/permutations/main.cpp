#include <algorithm>
#include <vector>
#include <iostream>
#include <numeric>
#include <iterator>

void print_vector(const std::vector<int>& vec) {
    bool is_first = true;
    for (auto el : vec) {
        if (is_first) {
            std::cout << el;
            is_first = false;
        }

        else {std::cout << " " << el;}
    }
    std::cout<< std::endl;
}

int main() {
    int N;
    std::cin >> N;
    std::vector<int> vec(N);

    std::iota(vec.rbegin(), vec.rend(), 1);
    do {
        print_vector(vec);
    } while (std::prev_permutation(vec.begin(), vec.end()));

    return 0;
}
