#define CATCH_CONFIG_MAIN
#include "catch.hpp"

bool isDivisibleBy5(int number) {
    return number % 5 == 0;
}

TEST_CASE("Test isDivisibleBy5 function", "[isDivisibleBy5]") {
    REQUIRE(isDivisibleBy5(10) == true);
    REQUIRE(isDivisibleBy5(15) == true);
    REQUIRE(isDivisibleBy5(20) == true);
    REQUIRE(isDivisibleBy5(25) == true);
    REQUIRE(isDivisibleBy5(30) == true);
    REQUIRE(isDivisibleBy5(1) == false);
    REQUIRE(isDivisibleBy5(2) == false);
    REQUIRE(isDivisibleBy5(3) == false);
    REQUIRE(isDivisibleBy5(4) == false);
    REQUIRE(isDivisibleBy5(6) == false);
}

