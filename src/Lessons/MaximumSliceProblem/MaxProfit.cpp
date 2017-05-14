// MaxProfit.cpp
#include <gmock/gmock.h>
#include <algorithm>

namespace {

int solution(std::vector<int> &A) {
  int max_profit = 0;
  if (!A.empty()) {
    int min_price = A.front();
    for (int a : A) {
      max_profit = std::max(max_profit, a - min_price);
      min_price = std::min(min_price, a);
    }
  }
  return max_profit;
}

TEST (MaxProfit, Example) {
  std::vector<int> a {23171, 21011, 21123, 21366, 21013, 21367};
  ASSERT_EQ(solution(a),356 );
}

} // namespace
