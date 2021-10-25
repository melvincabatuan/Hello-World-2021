#include "../src/calculator.h"

#define CATCH_CONFIG_MAIN

#include "catch.hpp"


TEST_CASE("Sum is computed correctly", "[float][float]"){
    float left = 2.5f;
    float right = 3.5f;
    REQUIRE(add(left, right) == Approx(6.0f));
    REQUIRE_FALSE(add(left, right) != Approx(6.0f));
}

TEST_CASE("Difference is computed correctly", "[float][float]"){
    float left = 4.5f;
    float right = 3.5f;
    REQUIRE(subtract(left, right) == Approx(1.0f));
    REQUIRE_FALSE(subtract(left, right) != Approx(1.0f));
}

TEST_CASE("Product is computed correctly", "[float][float]"){
    float left = 4.5f;
    float right = 2.0f;
    REQUIRE(multiply(left, right) == Approx(9.0f));
    REQUIRE_FALSE(multiply(left, right) != Approx(9.0f));
}

TEST_CASE("Quotient is computed correctly", "[float][float]"){
    float left = 5.0f;
    float right = 2.0f;
    REQUIRE(divide(left, right) == Approx(2.5f));
    REQUIRE_FALSE(divide(left, right) != Approx(2.5f));
}

TEST_CASE("Power is computed correctly", "[int][int]"){
    float left = 2;
    float right = 3;
    REQUIRE(power(left, right) == 8);
    REQUIRE_FALSE(power(left, right) != 8);
}