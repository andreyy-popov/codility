// Dominator.cpp
#include "Dominator.h"
#include <algorithm>
#include <iterator>

namespace Dominator {

int solution(std::vector<int> &A) {
  int count = 0;
  int candidate;
  for (int a : A) {
    if (!count) {
      candidate = a;
      ++count;
      continue;
    }
    if (candidate == a) {
      ++count;
      continue;
    }
    --count;
  }
  if (count) {
    count = std::count(A.begin(), A.end(), candidate);
    if (count > static_cast<int>(A.size() / 2)) {
      return std::distance(A.begin(), std::find(A.begin(), A.end(), candidate));
    }
  }
  return -1;
}

} // namespace
