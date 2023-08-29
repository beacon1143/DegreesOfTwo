#include <iostream>
#include <fstream>
#include <vector>
#include <algorithm>

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
      std::cout << "Error! Wrong numbers amount!\n";
      return 3;
    }
    std::vector<size_t> vec(nNumbers);
    for (size_t i = 0; i < nNumbers; i++) {
      fil >> vec[i];
    }
    fil.close();
    sort(vec.begin(), vec.end());
    for (auto i : vec) {
      std::cout << i << " ";
    }
    std::cout << std::endl;
    return 0;
  }
  catch (const std::exception& e) {
    std::cerr << e.what();
    return 1;
  }
}