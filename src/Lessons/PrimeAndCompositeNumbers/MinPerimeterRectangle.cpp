// MinPerimeterRectangle.cpp
#include <gmock/gmock.h>
#include <algorithm>

namespace {

int solution(int N) {
  int min_perimeter = 2 * (1 + N);
  for (int i = 2; (i * i) <= N; ++i) {
    if (!(N % i)) {
      min_perimeter = std::min(min_perimeter, 2 * (i + N / i));
    }
  }
  return min_perimeter;
}

TEST (MinPerimeterRectangle, Example) {
  ASSERT_EQ(solution(30), 22);
}

} // namespace
