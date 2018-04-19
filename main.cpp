/**
*	@author Leon Kleyn
*	@date 4/19
*	@file main.cpp
*	@brief linkedList test. detailed description of failed assertions
*/
#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main()
#include <iostream>
#include "LinkedListOfInts.h"
#include "catch.hpp"

LinkedListOfInts testableList;
TEST_CASE ("Testing isEmpty() with empty list")
{
	std::cout << "\n\nRunning test program . . .\n";
	GIVEN ("An instantiated empty list")
	{

		std::vector<int> vector = testableList.toVector();
		std::cout << "\n===============================================================================\n||\n|| ";
		std::cout << "Empty List\n||\n===============================================================================";
		std::cout << "\n   Test 1 : isEmpty() returns true for empty list : ";
		if (testableList.isEmpty() == vector.empty()) 
		{
			std::cout << "PASSED\n";
		}
		else 
		{
			std::cout << "FAILED\n\n";
		}
		CHECK (testableList.isEmpty() == vector.empty());
	
		std::cout << "   Test 2 : Size returns 0 for empty list : ";
		if (testableList.size() == 0) 
		{
			std::cout << "PASSED\n";
		}
		else
		{
			std::cout << "FAILED\n\n";
		}
		CHECK (testableList.size() == 0);
	}
}

TEST_CASE ("Testing addBack()")
{
	GIVEN ("A list that has been initialized with no members.")
	{
		testableList.addBack(5);
		std::vector<int> vector = testableList.toVector();
		std::cout << "\n===============================================================================\n||\n|| ";
		std::cout << "addBack()\n||\n===============================================================================";
		std::cout << "\n   Test 1 : Size returns correct value after 1 addBack() : ";
		if (testableList.size() == 1) 
		{
			std::cout << "PASSED\n";
		}
		else
		{
			std::cout << "FAILED\n\n";
		}
		CHECK (testableList.size() == 1);
		
		std::cout << "   Test 2 : Correct value at back of list after 1 addBack() : ";
		if (vector.back() == 5) 
		{
			std::cout << "PASSED\n";
		}
		else
		{
			std::cout << "FAILED\n\n";
		}
		CHECK (vector.back() == 5);
	}
		
	GIVEN ("A list with one value already added.")
	{
		testableList.addBack(10);
		std::vector<int> vector = testableList.toVector();
		std::cout << "   Test 3 : Size returns correct value after 2 addBack() : ";
		if (testableList.size() == 2) 
		{
			std::cout << "PASSED\n";
		}
		else
		{
			std::cout << "FAILED\n\n";
		}
		CHECK (testableList.size() == 2);
		
		std::cout << "   Test 4 : Correct value at back of list after 2 addBack() : ";
		if (vector.back() == 10) 
		{
			std::cout << "PASSED\n";
		}
		else
		{
			std::cout << "FAILED\n\n";
		}
		CHECK (vector.back() == 10);
	} 
}

TEST_CASE ("Testing search() and isEmpty()")
{
	GIVEN ("An non-empty list")
	{
		std::cout << "\n===============================================================================\n||\n|| ";
		std::cout << "Non-Empty List Search\n||\n===============================================================================";
		std::cout << "\n   Test 1 : Search returns correct bool when value is found : ";
		if (testableList.search(5) == true) 
		{
			std::cout << "PASSED\n";
		}
		else 
		{
			std::cout << "FAILED\n\n";
		}
		CHECK (testableList.search(5) == true);
		
		std::cout << "   Test 2 : Search returns correct bool when value is not found : ";
		if (testableList.search(2) == false) 
		{
			std::cout << "PASSED\n";
		}
		else
		{
			std::cout << "FAILED\n\n";
		}
		CHECK (testableList.search(2) == false);
		
		std::vector<int> vector = testableList.toVector();
		std::cout << "   Test 3 : isEmpty() returns false if the list is not empty : ";
		if (testableList.isEmpty() == vector.empty()) 
		{
			std::cout << "PASSED\n";
		}
		else 
		{
			std::cout << "FAILED\n\n";
		}
		CHECK (testableList.isEmpty() == vector.empty());
	}
}

TEST_CASE ("Testing removeBack()")
{
	GIVEN ("A list containing 2 ints")
	{
		int back = testableList.toVector().back();
		testableList.removeBack();
		std::vector<int> vector = testableList.toVector();
		std::cout << "\n===============================================================================\n||\n|| ";
		std::cout << "removeBack()\n||\n===============================================================================";
		std::cout << "\n   Test 1 : Size returns correct value after 1 removeBack() : ";
		if (testableList.size() == 1) 
		{
			std::cout << "PASSED\n";
		}
		else
		{
			std::cout << "FAILED\n\n";
		}
		CHECK (testableList.size() == 1);
		
		std::cout << "   Test 2 : Correct value at back of list after 1 removeBack() : ";
		if (vector.back() != back) 
		{
			std::cout << "PASSED\n";
		}
		else
		{
			std::cout << "FAILED\n\n";
		}
		CHECK (vector.back() != back);
	}
		
	GIVEN ("A list containing 1 int")
	{
		testableList.removeBack();
		std::vector<int> vector = testableList.toVector();
		std::cout << "   Test 3 : Size returns correct value after 2 removeBack() : ";
		if (testableList.size() == 0) 
		{
			std::cout << "PASSED\n";
		}
		else
		{
			std::cout << "FAILED\n\n";
		}
		CHECK (testableList.size() == 0);	
	} 
}

LinkedListOfInts testableList2;
TEST_CASE ("Testing addFront()")
{
	GIVEN ("A list that has been initialized with no members.")
	{
		testableList2.addFront(5);
		std::vector<int> vector = testableList2.toVector();
		std::cout << "\n===============================================================================\n||\n|| ";
		std::cout << "addFront()\n||\n===============================================================================";
		std::cout << "\n   Test 1 : Size returns correct value after 1 addFront() : ";
		if (testableList2.size() == 1) 
		{
			std::cout << "PASSED\n";
		}
		else
		{
			std::cout << "FAILED\n\n";
		}
		CHECK (testableList2.size() == 1);
		
		std::cout << "   Test 2 : Correct value at front of list after 1 addFront() : ";
		if (vector.front() == 5) 
		{
			std::cout << "PASSED\n";
		}
		else
		{
			std::cout << "FAILED\n\n";
		}
		CHECK (vector.front() == 5);
	}
		
	GIVEN ("A list with one value already added.")
	{
		testableList2.addFront(10);
		std::vector<int> vector = testableList2.toVector();
		
		std::cout << "   Test 3 : Size returns correct value after 2 addFront() : ";
		if (testableList2.size() == 2) 
		{
			std::cout << "PASSED\n";
		}
		else
		{
			std::cout << "FAILED\n\n";
		}
		CHECK (testableList2.size() == 2);
		
		std::cout << "   Test 4 : Correct value at front of list after 2 addFront() : ";
		if (vector.front() == 10) 
		{
			std::cout << "PASSED\n";
		}
		else
		{
			std::cout << "FAILED\n\n";
		}
		CHECK (vector.front() == 10);
	}
}

TEST_CASE ("Testing removeFront()")
{
	GIVEN ("A list containing 2 ints")
	{
		int front = testableList2.toVector().front();
		testableList2.removeFront();
		std::vector<int> vector = testableList2.toVector();
		std::cout << "\n===============================================================================\n||\n|| ";
		std::cout << "removeFront()\n||\n===============================================================================";
		std::cout << "\n   Test 1 : Size returns correct value after 1 removeFront() : ";
		if (testableList2.size() == 1) 
		{
			std::cout << "PASSED\n";
		}
		else
		{
			std::cout << "FAILED\n\n";
		}
		CHECK (testableList2.size() == 1);
		
		std::cout << "   Test 2 : Correct value at back of list after 1 removeFront() : ";
		if (vector.front() != front) 
		{
			std::cout << "PASSED\n";
		}
		else
		{
			std::cout << "FAILED\n\n";
		}
		CHECK (vector.front() != front);
	}
		
	GIVEN ("A list containing 1 int")
	{
		testableList2.removeFront();
		std::vector<int> vector = testableList2.toVector();
		
		std::cout << "   Test 3 : Size returns correct value after 2 removeFront() : ";
		if (testableList2.size() == 0) 
		{
			std::cout << "PASSED\n";
		}
		else
		{
			std::cout << "FAILED\n\n";
		}
		CHECK (testableList2.size() == 0);	
	}
	std::cout << "\n\nEnd of testing. Goodbye.\n";
}

