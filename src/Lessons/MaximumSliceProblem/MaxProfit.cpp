// MaxProfit.cpp
#include "MaxProfit.h"
#include <algorithm>

namespace MaxProfit {

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

} // namespace
