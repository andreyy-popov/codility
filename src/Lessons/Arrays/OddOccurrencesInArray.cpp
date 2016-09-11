// OddOccurrencesInArray.cpp
#include "OddOccurrencesInArray.h"
#include <numeric>
#include <functional>

namespace OddOccurrencesInArray {

int solution(std::vector<int> &A) {
  return std::accumulate(A.begin(), A.end(), 0, std::bit_xor<int>());
}

} // namespace
