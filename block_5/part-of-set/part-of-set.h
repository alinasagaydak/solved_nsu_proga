#pragma once

#include <vector>
#include <set>

template <typename T>
std::vector<T> FindGreaterElement(const std::set<T>& elements, const T& threshold) {
    auto upper_bound = elements.upper_bound(threshold);
    if (upper_bound != elements.end()) {
        return std::vector<T>(upper_bound, elements.end());
    }
    return std::vector<T>();
}
