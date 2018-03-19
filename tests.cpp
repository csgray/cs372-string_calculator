#include "catch.hpp"
#include "stringCalculator.h"

TEST_CASE("An empty string returns zero.") {
	REQUIRE(add("") == 0);
}