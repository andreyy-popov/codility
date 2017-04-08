// MinPerimeterRectangle.cpp
#include "MinPerimeterRectangle.h"
#include <algorithm>

namespace MinPerimeterRectangle {

int solution(int N) {
  int min_perimeter = 2 * (1 + N);
  for (int i = 2; (i * i) <= N; ++i) {
    if (!(N % i)) {
      min_perimeter = std::min(min_perimeter, 2 * (i + N / i));
    }
  }
  return min_perimeter;
}

} // namespace
