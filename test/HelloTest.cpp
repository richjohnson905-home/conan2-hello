
#include "../src/Hello.h"
#include <catch2/catch_all.hpp>


TEST_CASE("foo") {
    Hello h;
    REQUIRE(h.sum(4, 5) == 9);
    REQUIRE(1 == 1);
}