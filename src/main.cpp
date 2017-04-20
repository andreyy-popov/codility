// main.cpp
#include "Lessons/Iterations/BinaryGap.h"
#include "Lessons/Arrays/CyclicRotation.h"
#include "Lessons/Arrays/OddOccurrencesInArray.h"
#include "Lessons/TimeComplexity/TapeEquilibrium.h"
#include "Lessons/TimeComplexity/FrogJmp.h"
#include "Lessons/TimeComplexity/PermMissingElem.h"
#include "Lessons/CountingElements/FrogRiverOne.h"
#include "Lessons/CountingElements/PermCheck.h"
#include "Lessons/CountingElements/MissingInteger.h"
#include "Lessons/CountingElements/MaxCounters.h"
#include "Lessons/PrefixSums/PassingCars.h"
#include "Lessons/PrefixSums/CountDiv.h"
#include "Lessons/PrefixSums/GenomicRangeQuery.h"
#include "Lessons/PrefixSums/MinAvgTwoSlice.h"
#include "Lessons/Sorting/Distinct.h"
#include "Lessons/Sorting/MaxProductOfThree.h"
#include "Lessons/Sorting/Triangle.h"
#include "Lessons/Sorting/NumberOfDiscIntersections.h"
#include "Lessons/StacksAndQueues/Fish.h"
#include "Lessons/StacksAndQueues/Brackets.h"
#include "Lessons/StacksAndQueues/Nesting.h"
#include "Lessons/StacksAndQueues/StoneWall.h"
#include "Lessons/Leader/EquiLeader.h"
#include "Lessons/Leader/Dominator.h"
#include "Lessons/MaximumSliceProblem/MaxDoubleSliceSum.h"
#include "Lessons/MaximumSliceProblem/MaxProfit.h"
#include "Lessons/MaximumSliceProblem/MaxSliceSum.h"
#include "Lessons/PrimeAndCompositeNumbers/MinPerimeterRectangle.h"
#include "Lessons/PrimeAndCompositeNumbers/CountFactors.h"
#include "Lessons/PrimeAndCompositeNumbers/Peaks.h"
#include "Lessons/PrimeAndCompositeNumbers/Flags.h"
#include "Lessons/SieveOfEratosthenes/CountSemiprimes.h"
#include "Lessons/SieveOfEratosthenes/CountNonDivisible.h"
#include "Lessons/EuclideanAlgorithm/ChocolatesByNumbers.h"
#include "Lessons/EuclideanAlgorithm/CommonPrimeDivisors.h"
#include "Lessons/FibonacciNumbers/Ladder.h"
#include "Lessons/FibonacciNumbers/FibFrog.h"
#include "Lessons/BinarySearchAlgorithm/MinMaxDivision.h"
#include "Lessons/BinarySearchAlgorithm/NailingPlanks.h"
#include "Lessons/CaterpillarMethod/AbsDistinct.h"
#include "Lessons/CaterpillarMethod/CountDistinctSlices.h"
#include "Lessons/CaterpillarMethod/CountTriangles.h"
#include "Lessons/CaterpillarMethod/MinAbsSumOfTwo.h"
#include "Lessons/GreedyAlgorithms/TieRopes.h"
#include "Lessons/GreedyAlgorithms/MaxNonoverlappingSegments.h"
#include "Lessons/DynamicProgramming/NumberSolitaire.h"
#include "Lessons/DynamicProgramming/MinAbsSum.h"
#include "Lessons/TasksFromIndeedPrime2015Challenge/LongestPassword.h"
#include "Lessons/TasksFromIndeedPrime2015Challenge/FloodDepth.h"
#include "Lessons/TasksFromIndeedPrime2015Challenge/SlalomSkiing.h"
#include "Lessons/TasksFromIndeedPrime2016Challenge/DwarfsRafting.h"
#include "Lessons/TasksFromIndeedPrime2016Challenge/RectangleBuilderGreaterArea.h"
#include "Lessons/TasksFromIndeedPrime2016Challenge/TreeProduct.h"
#include "Lessons/TasksFromIndeedPrime2016Challenge/HilbertMaze.h"
#include "Lessons/TasksFromIndeedPrime2016CollegeCodersChallenge/TennisTournament.h"
#include "Lessons/TasksFromIndeedPrime2016CollegeCodersChallenge/SocksLaundering.h"
#include "Lessons/TasksFromIndeedPrime2016CollegeCodersChallenge/DiamondsCount.h"
#include "Lessons/TasksFromIndeedPrime2016CollegeCodersChallenge/ArrayRecovery.h"
#include "Lessons/FutureTraining/SqlSum.h"
#include "Lessons/FutureTraining/TreeHeight.h"
#include "Lessons/FutureTraining/StrSymmetryPoint.h"
#include "Lessons/FutureTraining/ArrayInversionCount.h"
#include "Lessons/FutureTraining/PolygonConcavityIndex.h"
#include <iostream>

template <typename T>
std::ostream& operator<<(std::ostream& os, const std::vector<T>& v) {
  for (auto it = v.begin(); it != v.end(); ++it) {
    if (it != v.begin()) {
      os << ',';
    }
    os << *it;
  }
  return os;
}

int main() {
  {
    std::cout << BinaryGap::solution(51712) << std::endl;
  } {
    std::vector<int> a {3, 8, 9, 7, 6};
    int k = 3;
    std::cout << CyclicRotation::solution(a, k) << std::endl;
  } {
    std::vector<int> a {9, 3, 9, 3, 9, 7, 9};
    std::cout << OddOccurrencesInArray::solution(a) << std::endl;
  } {
    std::vector<int> a {3, 1, 2, 4, 3};
    std::cout << TapeEquilibrium::solution(a) << std::endl;
  } {
    std::cout << FrogJmp::solution(10, 85, 30) << std::endl;
  } {
    std::vector<int> a {2, 3, 1, 5};
    std::cout << PermMissingElem::solution(a) << std::endl;
  } {
    std::vector<int> a {1, 3, 1, 4, 2, 3, 5, 4};
    std::cout << FrogRiverOne::solution(5, a) << std::endl;
  } {
    std::vector<int> a;
    a = {4, 1, 3, 2};
    std::cout << PermCheck::solution(a) << std::endl;
    a = {4, 1, 3};
    std::cout << PermCheck::solution(a) << std::endl;
  } {
    std::vector<int> a {1, 3, 6, 4, 1, 2};
    std::cout << MissingInteger::solution(a) << std::endl;
  } {
    std::vector<int> a {3, 4, 4, 6, 1, 4, 4};
    std::cout << MaxCounters::solution(5, a) << std::endl;
  } {
    std::vector<int> a {0, 1, 0, 1, 1};
    std::cout << PassingCars::solution(a) << std::endl;
  } {
    std::cout << CountDiv::solution(6, 11, 2) << std::endl;
  } {
    std::string s = "CAGCCTA";
    std::vector<int> p {2, 5, 0};
    std::vector<int> q {4, 5, 6};
    std::cout << GenomicRangeQuery::solution(s, p , q) << std::endl;
  } {
    std::vector<int> a;
    a = {4, 2, 2, 5, 1, 5, 8};
    std::cout << MinAvgTwoSlice::solution(a) << std::endl;
    a = {10, 10, -1, 2, 4, -1, 2, -1};
    std::cout << MinAvgTwoSlice::solution(a) << std::endl;
  } {
    std::vector<int> a {2, 1, 1, 2, 3, 1};
    std::cout << Distinct::solution(a) << std::endl;
  } {
    std::vector<int> a {-3, 1, 2, -2, 5, 6};
    std::cout << MaxProductOfThree::solution(a) << std::endl;
  } {
    std::vector<int> a;
    a = {10, 2, 5, 1, 8, 20};
    std::cout << Triangle::solution(a) << std::endl;
    a = {10, 50, 1};
    std::cout << Triangle::solution(a) << std::endl;
    a = {5, 3, 3};
    std::cout << Triangle::solution(a) << std::endl;
  } {
    std::vector<int> a;
    a = {1, 5, 2, 1, 4, 0};
    std::cout << NumberOfDiscIntersections::solution(a) << std::endl;
    a = {1, 1, 1};
    std::cout << NumberOfDiscIntersections::solution(a) << std::endl;
  } {
    std::vector<int> a {4, 3, 2, 1, 5};
    std::vector<int> b {0, 1, 0, 0, 0};
    std::cout << Fish::solution(a, b) << std::endl;
  } {
    std::string s;
    s = "{[()()]}";
    std::cout << Brackets::solution(s) << std::endl;
    s = "([)()]";
    std::cout << Brackets::solution(s) << std::endl;
  } {
    std::string s;
    s = "(()(())())";
    std::cout << Nesting::solution(s) << std::endl;
    s = "())";
    std::cout << Nesting::solution(s) << std::endl;
  } {
    std::vector<int> h {8, 8, 5, 7, 9, 8, 7, 4, 8};
    std::cout << StoneWall::solution(h) << std::endl;
  } {
    std::vector<int> a {4, 3, 4, 4, 4, 2};
    std::cout << EquiLeader::solution(a) << std::endl;
  } {
    std::vector<int> a {3, 4, 3, 2, 3, -1, 3, 3};
    std::cout << Dominator::solution(a) << std::endl;
  } {
    std::vector<int> a {3, 2, 6, -1, 4, 5, -1, 2};
    std::cout << MaxDoubleSliceSum::solution(a) << std::endl;
  } {
    std::vector<int> a {23171, 21011, 21123, 21366, 21013, 21367};
    std::cout << MaxProfit::solution(a) << std::endl;
  } {
    std::vector<int> a {3, 2, -6, 4, 0};
    std::cout << MaxSliceSum::solution(a) << std::endl;
  } {
    std::cout << MinPerimeterRectangle::solution(30) << std::endl;
  } {
    std::cout << CountFactors::solution(24) << std::endl;
  } {
    std::vector<int> a {1, 2, 3, 4, 3, 4, 1, 2, 3, 4, 6, 2};
    std::cout << Peaks::solution(a) << std::endl;
  } {
    std::vector<int> a {1, 5, 3, 4, 3, 4, 1, 2, 3, 4, 6, 2};
    std::cout << Flags::solution(a) << std::endl;
  }
  return 0;
}
