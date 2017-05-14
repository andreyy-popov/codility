// Distinct.cpp
#include <gmock/gmock.h>
#include <algorithm>

namespace {

int solution(std::vector<int> &A) {
  if (A.empty()) {
    return 0;
  }
  int res = 1;
  std::sort(A.begin(), A.end());
  for (unsigned int i = 1; i < A.size(); ++i) {
    if (A[i - 1] != A[i]) {
      ++res;
    }
  }
  return res;
}

TEST (Distinct, Example) {
  std::vector<int> a {2, 1, 1, 2, 3, 1};
  ASSERT_EQ(solution(a), 3);
}

} // namespace
