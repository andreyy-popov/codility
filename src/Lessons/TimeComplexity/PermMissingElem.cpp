// PermMissingElem.cpp
#include "PermMissingElem.h"
#include <numeric>

namespace PermMissingElem {

int solution(std::vector<int> &A) {
  int sum = 0;
  for (int n = A.size() + 1; n > 0; --n) {
    sum += n;
  }
  return sum - std::accumulate(A.begin(), A.end(), 0);
}

} // namespace
