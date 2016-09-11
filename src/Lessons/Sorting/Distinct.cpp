// Distinct.cpp
#include "Distinct.h"
#include <algorithm>

namespace Distinct {

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

} // namespace
