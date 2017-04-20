// Flags.cpp
#include "Flags.h"
#include <list>
#include <cmath>
#include <algorithm>

namespace Flags {

template <typename Values>
bool IsPeak(const Values& a, typename Values::size_type i) {
  if (i == 0) {
    return false;
  }
  if (i == (a.size() - 1)) {
    return false;
  }
  return (a[i - 1] < a[i]) && (a[i] > a[i + 1]);
}

template <typename Values>
std::list<int> Peaks(const Values& a) {
  std::list<int> res;
  for (int i = 0, size = a.size(); i < size; ++i) {
    if (IsPeak(a, i)) {
      res.push_back(i);
    }
  }
  return std::move(res);
}

int solution(std::vector<int> &A) {
  int res = 0;
  std::list<int> peaks = Peaks(A);
  if (peaks.size() >= 1) {
    for (int k = 1, maxFlags = std::floor(std::sqrt(A.size())) + 1; k <= maxFlags; ++k) {
      int count = 1, last = peaks.front();
      for (int p : peaks) {
        if ((p - last) >= k) {
          ++count;
          last = p;
        }
        if (count >= k) {
          break;
        }
      }
      res = std::max(res, count);
    }
  }
  return res;
}

} // namespace
