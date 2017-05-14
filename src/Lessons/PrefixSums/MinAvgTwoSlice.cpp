// MinAvgTwoSlice.cpp
#include <gmock/gmock.h>
#include <numeric>
#include <iterator>

namespace {

int solution(std::vector<int> &A) {
  int res = 0;
  double min_avg = (A[0] + A[1]) / 2.0;
  auto fn = [&] (int n) {
    for (auto it = A.begin(); it != (A.end() - n + 1); ++it) {
      double avg = std::accumulate(it, it + n, 0) / (n * 1.0);
      if (avg < min_avg) {
        min_avg = avg;
        res = std::distance(A.begin(), it);
      }
    }
  };
  return (fn(2), fn(3), res);
}

TEST (MinAvgTwoSlice, Example1) {
  std::vector<int> a {4, 2, 2, 5, 1, 5, 8};
  ASSERT_EQ(solution(a), 1);
}

TEST (MinAvgTwoSlice, Example2) {
  std::vector<int> a {10, 10, -1, 2, 4, -1, 2, -1};
  ASSERT_EQ(solution(a), 5);
}

} // namespace
