// FrogJmp.cpp
#include <gmock/gmock.h>
#include <cstdlib>

namespace {

int solution(int X, int Y, int D) {
  return (std::abs(X - Y) + D - 1) / D;
}

TEST (FrogJmp, Example) {
  ASSERT_EQ(solution(10, 85, 30), 3);
}

} // namespace
