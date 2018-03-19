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

TEST_CASE("Two numbers, comma delimited, returns the sum.") {
	REQUIRE(add("2,4") == 6);
	REQUIRE(add("13,39") == 52);
	REQUIRE(add("240,601") == 841);
}