#include "DegreesOfTwo.h"

bool IsDegreeOfTwo(size_t n) {
  if (n == 1) {
    return true;
  }
  else if (n % 2 != 0) {
    return false;
  }
  else {
    return IsDegreeOfTwo(n / 2);
  }
}

bool IsTheSumOfTwoDegrees(std::vector<size_t> vec, size_t num) {
  size_t curWish = 1, curSum = 0;
  size_t curIdx = 0;
  size_t remainder = num;
  while (remainder > 0) {
    if ((remainder / curWish) % 2 == 0) {
      curWish *= 2;
    }
    else {
      curSum = 0;
      while (curSum < curWish) {
        if (curIdx >= vec.size()) {
          return false;
        }
        curSum += vec[curIdx];
        curIdx++;
        if (curSum < curWish) {
          continue;
        }
        else {  // curSum >= curWish
          remainder -= curWish;
          curWish *= 2;
          break;
        }
      }
    }
  }
  return true;
}