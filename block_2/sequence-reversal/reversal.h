#pragma once
#include <vector>
#include <algorithm>

void Reverse(std::vector<int>& vec) {
    std::reverse(vec.begin(), vec.end());
}

std::vector<int> CopyReverse(const std::vector<int>& vec) {
    return std::vector<int>(vec.rbegin(), vec.rend());
}