// MinAvgTwoSlice.cpp
#include "MinAvgTwoSlice.h"
#include <numeric>
#include <iterator>

namespace MinAvgTwoSlice {

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

} // namespace
