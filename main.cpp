#include <iostream>
#include <fstream>
#include <algorithm>
#include "DegreesOfTwo.h"

int main() {
  try {
    std::ifstream fil("data.dat");
    if (!fil.is_open()) {
      std::cout << "Error! Cannot open file data.txt!\n";
      return 2;
    }
    size_t nNumbers = 0;
    fil >> nNumbers;
    if (nNumbers == 0) {
      std::cout << "Error! Wrong array size!\n";
      return 3;
    }
    std::vector<size_t> vec(nNumbers);
    for (size_t i = 0; i < nNumbers; i++) {
      fil >> vec[i];
      if (!IsDegreeOfTwo(vec[i])) {
        std::cout << "Error! The array element " << vec[i] << " is not degree of two!\n";
        return 4;
      }
    }
    fil.close();
    sort(vec.begin(), vec.end());
    std::cout << "Input the number...\n";
    size_t num;
    std::cin >> num;
    bool answer = IsTheSumOfTwoDegrees(vec, num);
    answer ? std::cout << "Yes!\n" : std::cout << "No!\n";
    return 0;
  }
  catch (const std::exception& e) {
    std::cerr << e.what();
    return 1;
  }
}