// TapeEquilibrium.cpp
#include <gmock/gmock.h>
#include <algorithm>
#include <numeric>

namespace {

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

TEST (TapeEquilibrium, Example) {
  std::vector<int> a {3, 1, 2, 4, 3};
  ASSERT_EQ(solution(a), 1);
}

} // namespace
