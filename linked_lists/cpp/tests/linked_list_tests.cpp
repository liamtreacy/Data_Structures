#define CATCH_CONFIG_MAIN
#include "../externals/catch.hpp"
#include "../linked_lists/linked_list.h"
#include "../utils/ll_utils.h"

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

TEST_CASE("LL has unique elements", "Linked List Utils Test")
{
    LinkedList ll;
    ll.add(1);
    ll.add(2);
    ll.add(3);
    REQUIRE(LinkedListUtils::hasUniqueElements(ll) == true);
}

TEST_CASE("LLs are equal", "Linked List Utils Test")
{
    LinkedList ll;
    ll.add(1);
    ll.add(2);
    ll.add(3);

    LinkedList oll;
    oll.add(1);
    oll.add(2);
    oll.add(3);

    REQUIRE(ll == oll);
}

TEST_CASE("LLs are not equal", "Linked List Utils Test")
{
    LinkedList ll;
    ll.add(1);
    ll.add(2);
    ll.add(3);

    LinkedList oll;
    oll.add(1);
    oll.add(4);
    oll.add(3);

    REQUIRE_FALSE(ll == oll);
}

TEST_CASE("LLs are not equal because not same size", "Linked List Utils Test")
{
    LinkedList ll;
    ll.add(1);
    ll.add(2);
    ll.add(3);

    LinkedList oll;
    oll.add(1);
    oll.add(2);
    oll.add(3);
    oll.add(5);

    REQUIRE_FALSE(ll == oll);
}

TEST_CASE("LL does not have unique elements", "Linked List Utils Test")
{
    LinkedList ll;
    ll.add(1);
    ll.add(2);
    ll.add(3);
    ll.add(2);
    REQUIRE_FALSE(LinkedListUtils::hasUniqueElements(ll));
}

TEST_CASE("Remove duplicates", "Linked List Utils Test")
{
    LinkedList ll;
    ll.add(1);
    ll.add(2);
    ll.add(3);
    ll.add(5);
    ll.add(3);
    ll.add(1);

    LinkedList expected;
    expected.add(1);
    expected.add(2);
    expected.add(3);
    expected.add(5);

    LinkedListUtils::removeDuplicates(ll);

    REQUIRE(ll == expected);
}