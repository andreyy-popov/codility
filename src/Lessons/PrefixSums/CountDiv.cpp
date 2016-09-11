// CountDiv.cpp
#include "CountDiv.h"

namespace CountDiv {

int solution(int A, int B, int K) {
  int c1 = A ? (A - 1) / K : -1;
  int c2 = B / K;
  return c2 - c1;
}

} // namespace
