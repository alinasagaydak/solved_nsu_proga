#include <set>
#include <algorithm>
#include <iterator>
#include <cmath>

std::set<int>::const_iterator FindNearestElement(const std::set<int>& numbers, int border) {
    auto it_lower = std::lower_bound(numbers.begin(), numbers.end(), border);
    if (it_lower != numbers.begin() && abs(*it_lower - border) >= abs(*(std::prev(it_lower, 1)) - border)) {return std::prev(it_lower, 1);}
    return it_lower;
}
