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