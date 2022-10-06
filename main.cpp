#include <iostream>
#include "funcs.h"

int main()
{
  std::cout << isDivisibleBy(4,2) << std::endl;
  std::cout << isPrime(23) << std::endl;
  std::cout << nextPrime(3) << std::endl;
  std::cout << countPrimes(1,10) << std::endl;
  std::cout << isTwinPrime(5) << std::endl;
  std::cout << nextTwinPrime(7) << std::endl;
  std::cout << largestTwinPrime(1,100) << std::endl;
  return 0;
}
