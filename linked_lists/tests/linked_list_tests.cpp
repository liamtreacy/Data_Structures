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

TEST_CASE("Remove element from empty LL", "Linked List Test")
{
    LinkedList ll;
    ll.remove(3);
    REQUIRE(ll.size() == 0);
}

TEST_CASE("Remove only element from LL", "Linked List Test")
{
    LinkedList ll;
    ll.add(23);
    ll.remove(23);
    REQUIRE(ll.size() == 0);
}

TEST_CASE("A few adds and removes from LL", "Linked List Test")
{
    LinkedList ll;
    ll.add(23);
    ll.add(4);
    ll.add(8);
    ll.remove(4);
    ll.add(9);
    ll.remove(23);
    REQUIRE(ll.size() == 2);
}