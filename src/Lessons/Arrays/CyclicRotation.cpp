// CyclicRotation.cpp
#include "CyclicRotation.h"
#include <algorithm>
#include <iterator>

namespace CyclicRotation {

std::vector<int> solution(std::vector<int> &A, int K) {
  std::vector<int> res;
  if (!A.empty()) {
    std::vector<int>::iterator middle = A.begin() + (A.size() - (K % A.size()));
    std::copy(middle, A.end(), std::back_inserter(res));
    std::copy(A.begin(), middle, std::back_inserter(res));
  }
  return res;
}

} // namespace
