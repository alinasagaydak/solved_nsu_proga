#pragma once

#include <vector>
#include <string>
#include <map>

class SortedString {
    private:
        std::map<std::string, int> seq;
    public:
        void AddString(const std::string& s);
        std::vector<std::string> GetSortedString() const;
};
