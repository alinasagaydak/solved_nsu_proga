#include "sortedstrings.h"

#include <iterator>
#include <vector>

void SortedString::AddString(const std::string& s) {
    if (seq.find(s) == seq.end()) {seq[s] = 1;}
    else {seq[s] += 1;}
}

std::vector<std::string> SortedString::GetSortedString() const {
    std::vector<std::string> vec;
    vec.reserve(seq.size());
    for (auto &kv : seq) {
        vec.insert(vec.end(), kv.second, kv.first);
    }
    return vec;
}