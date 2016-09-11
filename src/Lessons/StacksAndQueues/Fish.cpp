// Fish.cpp
#include "Fish.h"
#include <stack>

namespace Fish {

int solution(std::vector<int> &A, std::vector<int> &B) {
  int upstream_fish_count = 0;
  std::stack<int> downstream_fishes;
  for (int i = 0; i < std::distance(A.begin(), A.end()); ++i) {
    if (B[i]) {
      downstream_fishes.push(A[i]);
      continue;
    }
    while (!downstream_fishes.empty() && (downstream_fishes.top() < A[i])) {
      downstream_fishes.pop();
    }
    if (downstream_fishes.empty()) {
      ++upstream_fish_count;
      continue;
    }
  }
  return (upstream_fish_count + downstream_fishes.size());
}

} // namespace
