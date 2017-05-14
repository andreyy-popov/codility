// MaxDoubleSliceSum.cpp
#include <gmock/gmock.h>
#include <algorithm>

namespace {

int solution(std::vector<int> &A) {
  int res = 0;
  std::vector<int> l(A.size(), 0);
  for (unsigned int i = 1; i < A.size() - 1; ++i) {
    l[i] = std::max(l[i - 1] + A[i], 0);
  }
  std::vector<int> r(A.size(), 0);
  for (unsigned int i = A.size() - 2; i > 0; --i) {
    r[i] = std::max(r[i + 1] + A[i], 0);
  }
  for (unsigned int i = 1; i < A.size() - 1; ++i) {
    res = std::max(res, l[i - 1] + r[i + 1]);
  }
  return res;
}

TEST (MaxDoubleSliceSum, Example) {
  std::vector<int> a {3, 2, 6, -1, 4, 5, -1, 2};
  ASSERT_EQ(solution(a), 17);
}

} // namespace
