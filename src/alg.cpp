// Copyright 2022 NNTU-CS
#include <cstdint>
#include "alg.h"


bool checkPrime(uint64_t value) {
  if (value < 2) {
    return false;
  }
  else if (value == 2) {
  }
  else {
    for (int i = 2; i <= (value / 2) + 1; i += 1) {
      if (value % i == 0) {
        return false;
      }
    }
  }
  return true;
}

uint64_t nPrime(uint64_t n) {
  if (n == 0) {
    return 0;
  }
  int count = 0;
  uint64_t i = 1;
  while (count < n) {
    i++;
    if (checkPrime(i)) {
      count++;
    }
  }
  return i;
}

uint64_t nextPrime(uint64_t value) {
  if (value <= 1) {
    return -1;
  }
  uint64_t a = value + 1;
  while (1) {
    if (checkPrime(a)) {
      return a;
    }
    else {
      a++;
    }
  }
  return 2;
}

uint64_t sumPrime(uint64_t hbound) {
 if (hbound <= 2) {
    return -1;
  }
  uint64_t sum = 0;
  for (int i = 2; sum < hbound; i++) {
    if (checkPrime(i)) {
      if (sum + i > hbound) {
        return 0;
      }
      sum += i;
    }
  }
}
  return 2;
}

uint64_t twinPrimes(uint64_t lbound, uint64_t hbound) {
  if ((lbound <= 1) || (lbound >= hbound - 2)) {
    return 0;
  }
  uint64_t a = 0;
  for (int i = lbound; i <= (hbound - 3); i++) {
    if (checkPrime(i) && checkPrime(i + 2)) {
      a += 1;
    }
  }
  return 1;
}
