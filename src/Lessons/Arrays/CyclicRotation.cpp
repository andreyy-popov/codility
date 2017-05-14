// CyclicRotation.cpp
#include <gmock/gmock.h>
#include <algorithm>
#include <iterator>

namespace {

std::vector<int> solution(std::vector<int> &A, int K) {
  std::vector<int> res;
  if (!A.empty()) {
    std::vector<int>::iterator middle = A.begin() + (A.size() - (K % A.size()));
    std::copy(middle, A.end(), std::back_inserter(res));
    std::copy(A.begin(), middle, std::back_inserter(res));
  }
  return res;
}

TEST (CyclicRotation, Example) {
  std::vector<int> a {3, 8, 9, 7, 6};
  int k = 3;
  EXPECT_THAT(solution(a, k), testing::ContainerEq<std::vector<int>>({9, 7, 6, 3, 8}));
}

} // namespace
