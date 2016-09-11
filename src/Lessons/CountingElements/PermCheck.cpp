// PermCheck.cpp
#include "PermCheck.h"

namespace PermCheck {

int solution(std::vector<int> &A) {
  std::vector<int> count(A.size(), 0);
  for (unsigned int a : A) {
    if (a < 1) {
      return 0;
    }
    if (a > count.size()) {
      return 0;
    }
    ++count[a - 1];
  }
  for (int c : count) {
    if (c != 1) {
      return 0;
    }
  }
  return 1;
}

} // namespace
