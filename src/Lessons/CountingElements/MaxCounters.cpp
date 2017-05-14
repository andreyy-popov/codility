// MaxCounters.cpp
#include <gmock/gmock.h>
#include <algorithm>

namespace {

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

TEST (MaxCounters, Example) {
  std::vector<int> a {3, 4, 4, 6, 1, 4, 4};
  EXPECT_THAT(solution(5, a), testing::ContainerEq<std::vector<int>>({3, 2, 2, 4, 2}));
}

} // namespace
