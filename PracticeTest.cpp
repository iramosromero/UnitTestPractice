/**
 * Unit Tests for Practice class
**/
#include<iostream>
#include <gtest/gtest.h>
#include "Practice.h"

class PracticeTest : public ::testing::Test
{
	protected:
		PracticeTest(){} //constructor runs before each test
		virtual ~PracticeTest(){} //destructor cleans up after tests
		virtual void SetUp(){} //sets up before each test (after constructor)
		virtual void TearDown(){} //clean up after each test, (before destructor)
};

TEST(PracticeTest, is_simple_palindrome)
{
    Practice obj;
    bool actual = obj.isPalindrome("dad");
    ASSERT_TRUE(actual);
}


TEST(PracticeTest, symbol_notpalindrome)
{
    Practice obj;
    bool actual = obj.isPalindrome(";+*&!^@%^");
    ASSERT_FALSE(actual);
}

TEST(PracticeTest, symbol_palindrome)
{
    Practice obj;
    bool actual = obj.isPalindrome("&^&");
    ASSERT_TRUE(actual);
}

TEST(PracticeTest, empty_string_palindrome)
{
    Practice obj;
    bool actual = obj.isPalindrome("");
    ASSERT_TRUE(actual);
}

TEST(PracticeTest, number_string_is_simple_palindrome)
{
    Practice obj;
    bool actual = obj.isPalindrome("321aba123");
    ASSERT_TRUE(actual);
}

TEST(PracticeTest, number_string_is_false_simple_palindrome)
{
    Practice obj;
    bool actual = obj.isPalindrome("123abc123");
    ASSERT_FALSE(actual);
}


TEST(PracticeTest, capital_simple_palindrome)
{
    Practice obj;
    bool actual = obj.isPalindrome("RacECar");
    ASSERT_TRUE(actual);
}

TEST(PracticeTest, sort_decending_simple_decsending)
{
	int first = 1;
	int second = 2;
	int third = 3;
    Practice obj;
    obj.sortDescending(first, second, third);
    ASSERT_GT(first, second);
	ASSERT_GT(second, third);
	ASSERT_GT(first, third);
}

TEST(PracticeTest, sort_descending_1_simple_decsending)
{
	int first = 12;
	int second = 56;
	int third = 13;
    Practice obj;
    obj.sortDescending(first, second, third);
    ASSERT_GT(first, second);
	ASSERT_GT(second, third);
	ASSERT_GT(first, third);
}

TEST(PracticeTest, number_string_is_false_simple_decsending)
{
	int first = 100;
	int second = 60;
	int third = 50;
    Practice obj;
    obj.sortDescending(first, second, third);
    ASSERT_GT(first, second);
	ASSERT_GT(second, third);
	ASSERT_GT(first, third);
}
