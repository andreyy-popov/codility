// OddOccurrencesInArray.cpp
#include <gmock/gmock.h>
#include <numeric>
#include <functional>

namespace {

int solution(std::vector<int> &A) {
  return std::accumulate(A.begin(), A.end(), 0, std::bit_xor<int>());
}

TEST (OddOccurrencesInArray, Example) {
  std::vector<int> a {9, 3, 9, 3, 9, 7, 9};
  ASSERT_EQ(solution(a), 7);
}

} // namespace
