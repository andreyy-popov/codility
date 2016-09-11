// MaxCounters.cpp
#include "MaxCounters.h"
#include <algorithm>

namespace MaxCounters {

std::vector<int> solution(int N, std::vector<int> &A) {
  int max_count = 0;
  int next_max_count = 0;
  std::vector<int> count(N, 0);
  for (int a : A) {
    if (a <= N) {
      int& c = count[a - 1];
      if (c < max_count) {
        c = max_count;
      }
      next_max_count = std::max(next_max_count, ++c);
    } else {
      max_count = next_max_count;
    }
  }
  for (int& c : count) {
    if (c < max_count) {
      c = max_count;
    }
  }
  return count;
}

} // namespace
