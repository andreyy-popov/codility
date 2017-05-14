// main.cpp
#include "src/gmock-all.cc"
#include "src/gtest-all.cc"

int main(int argc, char* argv[]) {
  testing::InitGoogleMock(&argc, argv);
  return RUN_ALL_TESTS();
}
