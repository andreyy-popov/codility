// CountDiv.cpp
#include <gmock/gmock.h>

namespace {

int solution(int A, int B, int K) {
  int c1 = A ? (A - 1) / K : -1;
  int c2 = B / K;
  return c2 - c1;
}

TEST (CountDiv, Example) {
  ASSERT_EQ(solution(6, 11, 2), 3);
}

} // namespace
