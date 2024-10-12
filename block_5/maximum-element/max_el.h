#pragma once
#include <iterator>

template<typename ForwardIterator, typename UnaryPredicate>
ForwardIterator max_element_if(ForwardIterator first, ForwardIterator last, UnaryPredicate pred) {
  if (std::distance(first, last) == 0) { return last; }

  auto max = *first;
  ForwardIterator first_max_idx = first;
  bool we_found_pred_el = false;

  while (first != last) {
    if (pred(*first)) {
      if (we_found_pred_el) {
        if (max < *first) {
          max = *first;
          first_max_idx = first;
        }
      }

      else {
        max = *first;
        first_max_idx = first;
        we_found_pred_el = true;
      }
    }
    ++first;
  }

  if (we_found_pred_el) { return first_max_idx; }
  return last;
}

