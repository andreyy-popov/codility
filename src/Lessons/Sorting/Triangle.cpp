// Triangle.cpp
#include "Triangle.h"
#include <algorithm>

namespace Triangle {

int solution(std::vector<int> &A) {
  std::sort(A.begin(), A.end());
  for (int i = A.size() - 3; i >= 0; --i) {
    int a = A[i];
    int b = A[i + 1];
    int c = A[i + 2];
    if ((a + b - c) <= 0) {
      continue;
    }
    if ((b + c - a) <= 0) {
      continue;
    }
    if ((c + a - b) <= 0) {
      continue;
    }
    return 1;
  }
  return 0;
}

} // namespace
