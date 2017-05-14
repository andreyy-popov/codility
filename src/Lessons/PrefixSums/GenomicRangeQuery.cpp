// GenomicRangeQuery.cpp
#include <gmock/gmock.h>
#include <functional>

namespace {

std::vector<int> solution(std::string &S, std::vector<int> &P, std::vector<int> &Q) {
  typedef std::vector<int> PrefixSums;
  std::function<PrefixSums(char)>
  prefix_sums = [&S] (char ch) {
    PrefixSums res {0};
    int sum = 0;
    for (char c : S) {
      if (c == ch) {
        ++sum;
      }
      res.push_back(sum);
    }
    return res;
  };
  std::vector<PrefixSums> sums;
  for (char ch : {'A', 'C', 'G', 'T'}) {
    sums.push_back(prefix_sums(ch));
  }
  std::vector<int> res;
  for (unsigned int i = 0; i < P.size(); ++i) {
    int p = P[i];
    int q = Q[i] + 1;
    for (unsigned int j = 0; j < sums.size(); ++j) {
      if (sums[j][q] - sums[j][p]) {
        res.push_back(j + 1);
        break;
      }
    }
  }
  return res;
}

TEST (GenomicRangeQuery, Example) {
  std::string s = "CAGCCTA";
  std::vector<int> p {2, 5, 0};
  std::vector<int> q {4, 5, 6};
  EXPECT_THAT(solution(s, p, q), testing::ContainerEq<std::vector<int>>({2, 4, 1}));
}

} // namespace
