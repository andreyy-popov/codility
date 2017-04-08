// Peaks.cpp
#include "Peaks.h"

namespace Peaks {

template <typename Values, typename Size>
bool IsPeak(const Values& a, Size i) {
  if (i == 0) {
    return false;
  }
  if (i == (a.size() - 1)) {
    return false;
  }
  return (a[i - 1] < a[i]) && (a[i] > a[i + 1]);
}

template <typename Values, typename Peaks, typename Size>
bool TestBlockSize(const Values& a, const Peaks& peaks, Size blockSize) {
  Size first, last;
  for (
    first = 0, last = (blockSize - 1);
    last < a.size();
    first += blockSize, last += blockSize
  ) {
    if (IsPeak(a, first)) {
      continue;
    }
    if (IsPeak(a, last)) {
      continue;
    }
    if (peaks[first] == peaks[last]) {
      return false;
    }
  }
  return true;
}

int solution(std::vector<int> &A) {
  std::vector<int> peaks;
  std::vector<int>::size_type index, last;
  for (index = last = 0; index < A.size(); ++index) {
    if (IsPeak(A, index)) {
      last = index;
    }
    peaks.push_back(last);
  }
  std::vector<int>::size_type blockSize;
  for (blockSize = 2; blockSize <= A.size(); ++blockSize) {
    if (A.size() % blockSize) {
      continue;
    }
    if (!TestBlockSize(A, peaks, blockSize)) {
      continue;
    }
    return (A.size() / blockSize);
  }
  return 0;
}

} // namespace
