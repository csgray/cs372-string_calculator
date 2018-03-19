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

TEST_CASE("Two numbers, newline delimited, returns the sum.") {
	REQUIRE(add("3\n5") == 8);
	REQUIRE(add("14\n40") == 54);
	REQUIRE(add("241\n602") == 843);
}

TEST_CASE("Three numbers, delimited either way, returns the sum.") {
	REQUIRE(add("2,4,8") == 14);
	REQUIRE(add("14\n40\n76") == 130);
	REQUIRE(add("241\n602,963") == 1806);
}

TEST_CASE("Negative numbers throw an exception.") {
	REQUIRE_THROWS(add("-1"));
	REQUIRE_THROWS(add("2,-4"));
	REQUIRE_THROWS(add("14\n40\n-76"));
}

TEST_CASE("Numbers greater than 1000 are ignored.") {
	REQUIRE(add("1001") == 0);
	REQUIRE(add("7,10000") == 7);
	REQUIRE(add("13,2000,27") == 40);
}