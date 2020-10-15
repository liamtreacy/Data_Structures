#define CATCH_CONFIG_MAIN
#include "../externals/catch.hpp"
#include "../linked_lists/linked_list.h"

TEST_CASE("Default LL is empty", "Linked List Test")
{
    LinkedList ll;
    REQUIRE(ll.size() == 0);
}

TEST_CASE("LL has proper size after adding", "Linked List Test")
{
    LinkedList ll;
    ll.add(23);
    ll.add(27);
    REQUIRE(ll.size() == 2);
}