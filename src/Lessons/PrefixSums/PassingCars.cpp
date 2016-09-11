// PassingCars.cpp
#include "PassingCars.h"
#include <algorithm>

namespace PassingCars {

int solution(std::vector<int> &A) {
  int zeros = std::count(A.begin(), A.end(), 0);
  int ones = std::count(A.begin(), A.end(), 1);
  int res = 0;
  for (int a : A) {
    res += a ? (--ones, 0) : (--zeros, ones);
    if (res > 1000000000) {
      return -1;
    }
  }
  return res;
}

} // namespace
