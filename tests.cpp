#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "doctest.h"
#include "funcs.h"

TEST_CASE("A"){
    CHECK(isDivisibleBy(4,2) == true);
    CHECK(isDivisibleBy(5,2) == false);
    CHECK(isDivisibleBy(361,19) == true);
}

TEST_CASE("B"){
    CHECK(isPrime(2) == true);
    CHECK(isPrime(10) == false);
    CHECK(isPrime(29) == true);
}

TEST_CASE("C"){
    CHECK(nextPrime(14) == 17);
    CHECK(nextPrime(21) == 23);
    CHECK(nextPrime(45) != 46);
}

TEST_CASE("D"){
    CHECK(countPrimes(1,10) == 4);
    CHECK(countPrimes(1,20) == 8);
    CHECK(countPrimes(30,32) != 2);
}

TEST_CASE("E"){
    CHECK(isTwinPrime(3) == true);
    CHECK(isTwinPrime(4) == false);
    CHECK(isTwinPrime(31) == true);
}

TEST_CASE("F"){
    CHECK(nextTwinPrime(2) == 3);
    CHECK(nextTwinPrime(30) == 31);
    CHECK(nextTwinPrime(30) != 32);
}

TEST_CASE("G"){
    CHECK(largestTwinPrime(1,100) == 73);
    CHECK(largestTwinPrime(1,10) == 7);
    CHECK(largestTwinPrime(29,29) == 29);
}
