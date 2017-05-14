// MissingInteger.cpp
#include <gmock/gmock.h>

namespace {

int solution(std::vector<int> &A) {
  std::vector<int> count(A.size(), 0);
  for (unsigned int a : A) {
    if (a < 1) {
      continue;
    }
    if (a > count.size()) {
      continue;
    }
    ++count[a - 1];
  }
  for (unsigned int i = 0; i < count.size(); ++i) {
    if (!count[i]) {
      return (i + 1);
    }
  }
  return (count.size() + 1);
}

TEST (MissingInteger, Example) {
  std::vector<int> a {1, 3, 6, 4, 1, 2};
  ASSERT_EQ(solution(a), 5);
}

} // namespace
