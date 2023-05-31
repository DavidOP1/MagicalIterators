#include "doctest.h"
#include "sources/MagicalContainer.hpp"

namespace ariel{

TEST_CASE("MagicalContainer - Size")
{
    SUBCASE("Empty container")
    {
        MagicalContainer container;
        CHECK(container.size() == 0);
    }

    SUBCASE("Container with elements")
    {
        MagicalContainer container;
        container.addElement(5);
        container.addElement(7);
        container.addElement(9);

        CHECK(container.size() == 3);
    }
}

TEST_CASE("MagicalContainer - Add and Remove Element")
{
    SUBCASE("Add element")
    {
        MagicalContainer container;
        container.addElement(2);
        container.addElement(3);
        container.addElement(5);

        CHECK(container.size() == 3);
    }

    SUBCASE("Remove element")
    {
        MagicalContainer container;
        container.addElement(2);
        container.addElement(3);
        container.addElement(5);

        container.removeElement(3);

        CHECK(container.size() == 2);
    }

    SUBCASE("Remove non-existent element")
    {
        MagicalContainer container;
        container.addElement(2);
        container.addElement(3);
        container.addElement(5);

        CHECK_THROWS(container.removeElement(7));
    }
}

TEST_CASE("PrimeIterator - Iterating Over Prime Numbers")
{
    MagicalContainer container;
    container.addElement(2);
    container.addElement(3);
    container.addElement(4);
    container.addElement(5);

    SUBCASE("Prefix Increment")
    {
        MagicalContainer::PrimeIterator it(container);

        CHECK(*it == 2);
        CHECK(*++it == 3);
        CHECK(*++it == 5);

        ++it;
        // Add your own check for iterator reaching the end or any other desired behavior
    }

    SUBCASE("Comparison Operators")
    {
        MagicalContainer::PrimeIterator it1(container);
        MagicalContainer::PrimeIterator it2(container);

        CHECK(it1 == it2);
        CHECK(!(it1 != it2));

        ++it1;
        CHECK(it1 != it2);
        // Add your own checks for comparison operators based on your requirements
    }
}

TEST_CASE("AscendingIterator - Iterating in Ascending Order")
{
    MagicalContainer container;
    container.addElement(5);
    container.addElement(2);
    container.addElement(7);
    container.addElement(3);

    SUBCASE("Prefix Increment")
    {
        MagicalContainer::AscendingIterator it(container);

        CHECK(*it == 2);
        CHECK(*++it == 3);
        CHECK(*++it == 5);
        CHECK(*++it == 7);

        ++it;
        // Add your own check for iterator reaching the end or any other desired behavior
    }

    SUBCASE("Comparison Operators")
    {
        MagicalContainer::AscendingIterator it1(container);
        MagicalContainer::AscendingIterator it2(container);

        CHECK(it1 == it2);
        CHECK(!(it1 != it2));

        ++it1;
        CHECK(it1 != it2);
        // Add your own checks for comparison operators based on your requirements
    }
}

TEST_CASE("MagicalContainer - Edge Cases")
{
    SUBCASE("Add and Remove Zero")
    {
        MagicalContainer container;
        container.addElement(0);
        container.addElement(0);
        container.addElement(0);

        container.removeElement(0);

        CHECK(container.size() == 2);
    }

    SUBCASE("Add and Remove Negative Elements")
    {
        MagicalContainer container;
        container.addElement(-2);
        container.addElement(-3);
        container.addElement(-5);

        container.removeElement(-3);

        CHECK(container.size() == 2);
    }
}

TEST_CASE("MagicalContainer - Performance")
{
    SUBCASE("Adding and Removing Large Number of Elements")
    {
        MagicalContainer container;
        for (int i = 0; i < 10000; ++i) {
            container.addElement(i);
        }

        CHECK(container.size() == 10000);

        for (int i = 0; i < 10000; ++i) {
            container.removeElement(i);
        }

        CHECK(container.size() == 0);
    }
}

TEST_CASE("MagicalContainer - Invalid Operations")
{
    SUBCASE("Remove from Empty Container")
    {
        MagicalContainer container;

        CHECK_THROWS(container.removeElement(5));
    }
}

}