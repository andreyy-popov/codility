// MaxProductOfThree.cpp
#include "MaxProductOfThree.h"
#include <algorithm>
#include <functional>

namespace MaxProductOfThree {

int solution(std::vector<int> &A) {
  std::vector<int> a1(2);
  std::vector<int> a2(3);
  std::partial_sort_copy(A.begin(), A.end(), a1.begin(), a1.end());
  std::partial_sort_copy(A.begin(), A.end(), a2.begin(), a2.end(), std::greater<int>());
  return std::max(
    a1[0] * a1[1] * a2[0],
    a2[0] * a2[1] * a2[2]);
}

} // namespace
