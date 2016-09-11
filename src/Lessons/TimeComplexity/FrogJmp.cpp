// FrogJmp.cpp
#include "FrogJmp.h"
#include <cstdlib>

namespace FrogJmp {

int solution(int X, int Y, int D) {
  return (std::abs(X - Y) + D - 1) / D;
}

} // namespace
