#include "catch.hpp"
#include "stringCalculator.h"

TEST_CASE("An empty string returns zero.") {
	REQUIRE(add("") == 0);
}

TEST_CASE("A single number returns the value.") {
	REQUIRE(add("1") == 1);
	REQUIRE(add("10") == 10);
	REQUIRE(add("101") == 101);
}