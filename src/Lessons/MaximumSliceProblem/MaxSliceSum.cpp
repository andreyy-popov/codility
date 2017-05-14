// MaxSliceSum.cpp
#include <gmock/gmock.h>
#include <algorithm>

namespace {

int solution(std::vector<int> &A) {
  int max_ending = A.front();
  int max_slice = max_ending;
  for (auto it = ++A.begin(); it != A.end(); ++it) {
    max_ending = std::max(*it, max_ending + *it);
    max_slice = std::max(max_slice, max_ending);
  }
  return max_slice;
}

TEST (MaxSliceSum, Example) {
  std::vector<int> a {3, 2, -6, 4, 0};
  ASSERT_EQ(solution(a), 5);
}

} // namespace
