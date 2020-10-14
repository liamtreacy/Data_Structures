#define CATCH_CONFIG_MAIN
#include "../externals/catch.hpp"

TEST_CASE("Hello world", "first test")
{
    REQUIRE(true == false);
}