// FrogRiverOne.cpp
#include "FrogRiverOne.h"
#include <algorithm>
#include <numeric>

namespace FrogRiverOne {

int solution(int X, std::vector<int> &A) {
  std::vector<unsigned int> pos_min_index(X, A.size());
  for (unsigned int i = 0; i < A.size(); ++i) {
    unsigned int& index = pos_min_index[A[i] - 1];
    index = std::min(index, i);
  }
  if (std::find(pos_min_index.begin(), pos_min_index.end(), A.size()) != pos_min_index.end()) {
    return -1;
  }
  return std::accumulate(pos_min_index.begin(), pos_min_index.end(), 0,
    [] (int p1, int p2) { return std::max(p1, p2); });
}

} // namespace
