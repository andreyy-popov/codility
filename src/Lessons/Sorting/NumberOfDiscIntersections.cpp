// NumberOfDiscIntersections.cpp
#include "NumberOfDiscIntersections.h"
#include <algorithm>
#include <iterator>
#include <utility>

namespace NumberOfDiscIntersections {

int solution(std::vector<int> &A) {
  int res = 0;
  typedef long long int Int;
  struct Range {
    Int from, to;
    Range(Int from) : from(from), to(from)
      {}
    Range(Int from, Int to) : from(from), to(to)
      {}
    bool operator<(const Range& r) const
      { return from < r.from; }
  };
  std::vector<Range> ranges;
  for (Int i = 0; i < std::distance(A.begin(), A.end()); ++i) {
    ranges.emplace_back(i - A[i], i + A[i]);
  }
  std::sort(ranges.begin(), ranges.end());
  for (auto it = ranges.begin(); it != ranges.end(); ++it) {
    res += std::distance(it + 1, std::upper_bound(it, ranges.end(), Range(it->to)));
    if (res > 10000000) {
      return -1;
    }
  }
  return res;
}

} // namespace
