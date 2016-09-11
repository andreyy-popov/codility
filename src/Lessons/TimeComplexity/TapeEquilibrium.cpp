// TapeEquilibrium.cpp
#include "TapeEquilibrium.h"
#include <algorithm>
#include <numeric>

namespace TapeEquilibrium {

int solution(std::vector<int> &A) {
  int prefix_sum = A.front();
  int suffix_sum = std::accumulate(++A.begin(), A.end(), 0);
  int res = std::abs(suffix_sum - prefix_sum);
  for (auto it = A.begin() + 1; it != A.end() - 1; ++it) {
    prefix_sum += *it;
    suffix_sum -= *it;
    res = std::min(res, std::abs(suffix_sum - prefix_sum));
  }
  return res;
}

} // namespace
