// MaxDoubleSliceSum.cpp
#include "MaxDoubleSliceSum.h"
#include <algorithm>

namespace MaxDoubleSliceSum {

int solution(std::vector<int> &A) {
  int res = 0;
  std::vector<int> l(A.size(), 0);
  for (unsigned int i = 1; i < A.size(); ++i) {
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

} // namespace
