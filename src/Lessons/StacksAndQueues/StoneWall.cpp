// StoneWall.cpp
#include "StoneWall.h"
#include <stack>

namespace StoneWall {

int solution(std::vector<int> &H) {
  int total_height = 0;
  int block_count = 0;
  std::stack<int> blocks;
  for (int h : H) {
    while (h < total_height) {
      total_height -= blocks.top();
      blocks.pop();
    }
    if (h > total_height) {
      blocks.push(h - total_height);
      total_height += blocks.top();
      ++block_count;
    }
  }
  return block_count;
}

} // namespace
