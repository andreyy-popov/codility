// PassingCars.cpp
#include <gmock/gmock.h>
#include <algorithm>

namespace {

int solution(std::vector<int> &A) {
  int zeros = std::count(A.begin(), A.end(), 0);
  int ones = std::count(A.begin(), A.end(), 1);
  int res = 0;
  for (int a : A) {
    res += a ? (--ones, 0) : (--zeros, ones);
    if (res > 1000000000) {
      return -1;
    }
  }
  return res;
}

TEST (PassingCars, Example) {
  std::vector<int> a {0, 1, 0, 1, 1};
  ASSERT_EQ(solution(a), 5);
}

} // namespace
