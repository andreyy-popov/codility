// PermCheck.cpp
#include <gmock/gmock.h>

namespace {

int solution(std::vector<int> &A) {
  std::vector<int> count(A.size(), 0);
  for (unsigned int a : A) {
    if (a < 1) {
      return 0;
    }
    if (a > count.size()) {
      return 0;
    }
    ++count[a - 1];
  }
  for (int c : count) {
    if (c != 1) {
      return 0;
    }
  }
  return 1;
}

TEST (PermCheck, Example1) {
  std::vector<int> a {4, 1, 3, 2};
  ASSERT_EQ(solution(a), 1);
}

TEST (PermCheck, Example2) {
  std::vector<int> a {4, 1, 3};
  ASSERT_EQ(solution(a), 0);
}

} // namespace
