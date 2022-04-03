// Copyright 2022 NNTU-CS
#include <cstdint>
#include "alg.h"


bool checkPrime(uint64_t value) {
// вставьте код функции
for (int i = 2; i <= sqrt(value); i++) {
if (value%i == 0) {
return false;
}
}
return true;
}
}

uint64_t nPrime(uint64_t n) {
// вставьте код функции
int count = 0;
uint64_t i = 1;
while (count != n) {
i++;
if (checkPrime(i)) {
count++:
}
}
return i;
}
}

uint64_t nextPrime(uint64_t value) {
// вставьте код функции
int t = value;
while (true) {
t++;
if (checkPrime(t)) {
return t:
}
}
}
}

uint64_t sumPrime(uint64_t hbound) {
// вставьте код функции
int64_t sum = 0;
for (uint64_t i = 2; i < hbound; i++) {
if (checkPrime(i)) {
sum += i;
}
}
return sum;
}
}
