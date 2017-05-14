// PermMissingElem.cpp
#include <gmock/gmock.h>
#include <numeric>

namespace {

int solution(std::vector<int> &A) {
  int sum = 0;
  for (int n = A.size() + 1; n > 0; --n) {
    sum += n;
  }
  return sum - std::accumulate(A.begin(), A.end(), 0);
}

TEST (PermMissingElem, Example) {
  std::vector<int> a {2, 3, 1, 5};
  ASSERT_EQ(solution(a), 4);
}

} // namespace
