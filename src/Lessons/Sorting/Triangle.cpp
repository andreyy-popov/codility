// Triangle.cpp
#include <gmock/gmock.h>
#include <algorithm>

namespace {

int solution(std::vector<int> &A) {
  std::sort(A.begin(), A.end());
  for (int i = A.size() - 3; i >= 0; --i) {
    int a = A[i];
    int b = A[i + 1];
    int c = A[i + 2];
    if ((a + b - c) <= 0) {
      continue;
    }
    if ((b + c - a) <= 0) {
      continue;
    }
    if ((c + a - b) <= 0) {
      continue;
    }
    return 1;
  }
  return 0;
}

TEST (Triangle, Example1) {
  std::vector<int> a {10, 2, 5, 1, 8, 20};
  ASSERT_EQ(solution(a), 1);
}

TEST (Triangle, Example2) {
  std::vector<int> a {10, 50, 1};
  ASSERT_EQ(solution(a), 0);
}

TEST (Triangle, Example3) {
  std::vector<int> a {5, 3, 3};
  ASSERT_EQ(solution(a), 1);
}

} // namespace
