#pragma once

#include <vector>
#include <string>
#include <algorithm>
#include <cctype>

bool cmp(char s1, char s2) {
    return std::tolower(s1) < std::tolower(s2);
}

void CaseInsensitiveSort(std::vector<std::string>& vstr) {
    sort(vstr.begin(), vstr.end(),
        [](const std::string& str1, const std::string& str2)
            {return std::lexicographical_compare(str1.begin(), str1.end(), str2.begin(), str2.end(), cmp);});
}