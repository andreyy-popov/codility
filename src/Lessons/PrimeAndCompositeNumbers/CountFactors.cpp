// CountFactors.cpp
#include <gmock/gmock.h>

namespace {

int solution(int N) {
  int factors = 0;
  long long int i = 1;
  while ((i * i) < N) {
    if (!(N % i++)) {
      factors += 2;
    }
  }
  if ((i * i) == N) {
    ++factors;
  }
  return factors;
}

TEST (CountFactors, Example) {
  ASSERT_EQ(solution(24), 8);
}

} // namespace
