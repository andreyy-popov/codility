// EquiLeader.cpp
#include <gmock/gmock.h>
#include <algorithm>

namespace {

int leader(const std::vector<int>& a, int& l) {
  int count = 0;
  for (int val : a) {
    if (!count) {
      l = val;
      ++count;
    } else {
      if (val == l) {
        ++count;
      } else {
        --count;
      }
    }
  }
  if (count) {
    count = std::count(a.begin(), a.end(), l);
    if (count > static_cast<int>(a.size() / 2)) {
      return count;
    }
  }
  return 0;
}

int solution(std::vector<int> &A) {
  int leader_value;
  int leader_count = leader(A, leader_value);
  if (leader_count) {
    unsigned int res = 0;
    unsigned int c1 = 0;
    for (unsigned int i = 0; i < (A.size() - 1); ++i) {
      if (A[i] == leader_value) {
        ++c1;
      }
      unsigned int n1 = (i + 1) / 2;
      unsigned int c2 = leader_count - c1;
      unsigned int n2 = (A.size() - (i + 1)) / 2;
      if ((c1 > n1) && (c2 > n2)) {
        ++res;
      }
    }
    return res;
  }
  return 0;
}

TEST (EquiLeader, Example) {
  std::vector<int> a {4, 3, 4, 4, 4, 2};
  ASSERT_EQ(solution(a), 2);
}

} // namespace
