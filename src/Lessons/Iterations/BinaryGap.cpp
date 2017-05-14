// BinaryGap.cpp
#include <gmock/gmock.h>
#include <functional>
#include <algorithm>

namespace {

int solution(int N) {
  std::function<int(int)>
  trim_zeros = [&trim_zeros] (int n) {
    if (!n) {
      return n;
    }
    if (n & 1) {
      return n;
    }
    return trim_zeros(n >> 1);
  };
  std::function<int(int, int, int)>
  max_gap = [&max_gap] (int n, int zeros, int res) {
    if (!n) {
      return res;
    }
    if (n & 1) {
      return max_gap(n >> 1, 0, std::max(res, zeros));
    }
    return max_gap(n >> 1, zeros + 1, res);
  };
  return max_gap(trim_zeros(N), 0, 0);
}

TEST (BinaryGap, Example) {
  ASSERT_EQ(solution(51712), 2);
}

} // namespace
