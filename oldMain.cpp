/**
*	@author
*	@date
*	@file main.cpp
*	@brief driver for LinkedList demo
*/
#define CATCH_CONFIG_MAIN
#include "LinkedListOfInts.h"
#include "catch.hpp"

/* TESTING ADDFRONT */
TEST_CASE("Items can be added to the front of a list", "[list]"){

		SECTION("when the list is empty"){
				LinkedListOfInts list;
				list.addFront(1);
				auto vec = list.toVector();
				CHECK(vec.size() == 1);
				CHECK(vec[0] == 1);
		}

		SECTION("when the list is populated"){
				LinkedListOfInts list;
				list.addFront(3);
				list.addFront(2);
				list.addFront(1);
				auto vec = list.toVector();
				CHECK(vec.size() == 3);
				CHECK(vec[0] == 1);
				CHECK(vec[1] == 2);
				CHECK(vec[2] == 3);
		}
}

/* TESTING ADDBACK */
TEST_CASE("Items can be added to the back of a list", "[list]"){

		SECTION("when the list is empty"){
				LinkedListOfInts list;
				list.addBack(1);
				auto vec = list.toVector();
				CHECK(vec.size() == 1);
				CHECK(vec[0] == 1);
		}

		SECTION("when the list is populated"){
				LinkedListOfInts list;
				list.addBack(3);
				list.addBack(2);
				list.addBack(1);
				auto vec = list.toVector();
				CHECK(vec.size() == 3);
				CHECK(vec[0] == 3);
				CHECK(vec[1] == 2);
				CHECK(vec[2] == 1);
		}
}

/* TESTING REMOVEFRONT */
TEST_CASE("Items can be removed from the front of a list", "[list]"){

		SECTION("when the list has one item"){
				LinkedListOfInts list;
				list.addFront(1);
				auto vec = list.toVector();

				REQUIRE(vec.size() == 1);		// require addFront functionality

				list.removeFront();
				vec = list.toVector();
				CHECK(vec.size() == 0);
		}

		SECTION("when the list is populated"){
			LinkedListOfInts list;
			list.addFront(3);
			list.addFront(2);
			list.addFront(1);
			auto vec = list.toVector();

			REQUIRE(vec.size() == 3);		// require addFront functionality

			list.removeFront();
			vec = list.toVector();
			CHECK(vec.size() == 2);
			CHECK(vec[0] == 2);
			CHECK(vec[1] == 3);
		}
}

/* TESTING REMOVEBACK */
TEST_CASE("Items can be removed from the back of a list", "[list]"){

		SECTION("when the list has one item"){
				LinkedListOfInts list;
				list.addFront(1);
				auto vec = list.toVector();

				REQUIRE(vec.size() == 1);		// require addFront functionality

				list.removeBack();
				vec = list.toVector();
				CHECK(vec.size() == 0);
		}

		SECTION("when the list is populated"){
			LinkedListOfInts list;
			list.addFront(3);
			list.addFront(2);
			list.addFront(1);
			auto vec = list.toVector();

			REQUIRE(vec.size() == 3);		// require addFront functionality

			list.removeBack();
			vec = list.toVector();
			CHECK(vec.size() == 2);
			CHECK(vec[0] == 1);
			CHECK(vec[1] == 2);
		}
}
/* TESTING SIZE */
TEST_CASE("Size of a list can be retrieved", "[list]"){

		SECTION("when the list is empty"){
				LinkedListOfInts list;
				CHECK(list.size() == 0);
		}

		SECTION("when the list has one item"){
				LinkedListOfInts list;
				list.addFront(1);
				auto vec = list.toVector();
				CHECK(list.size() == 1);
		}

		SECTION("when the list is populated"){
				LinkedListOfInts list;
				list.addFront(2);
				list.addFront(1);
				auto vec = list.toVector();
				CHECK(list.size() == 2);
		}
}

/* TESTING ISEMPTY */
TEST_CASE("List can be recognized as empty or non-empty", "[list]"){

		SECTION("when the list is empty"){
				LinkedListOfInts list;
				CHECK(list.size() == 0);
				CHECK(list.isEmpty() == true);
		}

		SECTION("when the list is populated"){
				LinkedListOfInts list;
				list.addFront(2);
				list.addFront(1);
				CHECK(list.size() == 2);
				CHECK(list.isEmpty() == false);
		}
}

/* TESTING SEARCH */
TEST_CASE("List can be searched", "[list]"){
		SECTION("when the list is empty"){
				LinkedListOfInts list;
				CHECK(list.search(10) == false);
		}

		SECTION("when the list is populated with the item"){
				LinkedListOfInts list;
				list.addFront(2);
				list.addFront(1);
				CHECK(list.search(3) == false);
		}

		SECTION("when the list is populated with the item"){
				LinkedListOfInts list;
				list.addFront(2);
				list.addFront(1);
				CHECK(list.search(1) == true);
		}

}
