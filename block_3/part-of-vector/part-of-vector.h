#pragma once

#include <vector>
#include <iostream>
#include <iterator>
#include <algorithm>

void reverse_copy_to_os(const std::vector<int>::const_iterator it_begin, const std::vector<int>::const_iterator it_end, std::ostream& os = std::cout) {
    bool is_first = true;

    for (auto it = it_end - 1; it >= it_begin; --it) {
      if (is_first) {
            os << *it;
            is_first = false;
      }
      else {os << " " << *it;}
    }
}

void PrintVectorPart(const std::vector<int>& v, std::ostream& os = std::cout) {
   auto it = std::find_if(begin(v), end(v), [](int a) {return a < 0;});
   reverse_copy_to_os(v.begin(), it, os);
}
