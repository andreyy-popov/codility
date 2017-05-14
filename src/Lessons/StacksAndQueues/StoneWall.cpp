// StoneWall.cpp
#include <gmock/gmock.h>
#include <stack>

namespace {

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

TEST (StoneWall, Example) {
  std::vector<int> h {8, 8, 5, 7, 9, 8, 7, 4, 8};
  ASSERT_EQ(solution(h), 7);
}

} // namespace
