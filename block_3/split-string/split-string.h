#pragma once

#include <string>
#include <vector>
#include <iterator>
#include <algorithm>

std::vector<std::string> SplitInWords(const std::string& s){
   std::vector<std::string> vec;
   auto it_left = s.begin();
   auto it_right = find(s.begin(), s.end(), ' ');
   vec.emplace_back(it_left, it_right);
   
   while (it_right != s.end()) {
      it_left = it_right + 1;
      it_right = find(it_left, s.end(), ' ');
      vec.emplace_back(it_left, it_right);
   }

   return vec;
}
