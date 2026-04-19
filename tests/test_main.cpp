#include <gtest/gtest.h>
#include "main.h"

// tea_party tests
TEST(TeaParty, BothEnough) {
    EXPECT_EQ(tea_party(6, 8), 1);
}

TEST(TeaParty, TeaTooLow) {
    EXPECT_EQ(tea_party(3, 8), 0);
}

TEST(TeaParty, CandyTooLow) {
    EXPECT_EQ(tea_party(8, 3), 0);
}

TEST(TeaParty, TeaDoubleCandy) {
    EXPECT_EQ(tea_party(20, 6), 2);
}

TEST(TeaParty, CandyDoubleTea) {
    EXPECT_EQ(tea_party(6, 20), 2);
}

// fizz_string tests
TEST(FizzString, StartsWithF) {
    EXPECT_EQ(fizz_string("fig"), "Fizz");
}

TEST(FizzString, EndsWithB) {
    EXPECT_EQ(fizz_string("dib"), "Buzz");
}

TEST(FizzString, StartsWithFEndsWithB) {
    EXPECT_EQ(fizz_string("fib"), "FizzBuzz");
}

TEST(FizzString, Neither) {
    EXPECT_EQ(fizz_string("hello"), "hello");
}

// fizz_string2 tests
TEST(FizzString2, RegularNumber) {
    EXPECT_EQ(fizz_string2(1), "1!");
    EXPECT_EQ(fizz_string2(2), "2!");
}

TEST(FizzString2, DivisibleBy3) {
    EXPECT_EQ(fizz_string2(3), "Fizz!");
    EXPECT_EQ(fizz_string2(9), "Fizz!");
}

TEST(FizzString2, DivisibleBy5) {
    EXPECT_EQ(fizz_string2(5), "Buzz!");
    EXPECT_EQ(fizz_string2(10), "Buzz!");
}

TEST(FizzString2, DivisibleBy3And5) {
    EXPECT_EQ(fizz_string2(15), "FizzBuzz!");
}

// two_as_one tests
TEST(TwoAsOne, APlusBEqualsC) {
    EXPECT_TRUE(two_as_one(1, 2, 3));
}

TEST(TwoAsOne, APlusCEqualsB) {
    EXPECT_TRUE(two_as_one(3, 1, 2));
}

TEST(TwoAsOne, BPlusCEqualsA) {
    EXPECT_TRUE(two_as_one(3, 2, 1));
}

TEST(TwoAsOne, NoneMatch) {
    EXPECT_FALSE(two_as_one(3, 2, 2));
}

TEST(Sum67, CodingBat) {
    std::vector<int> TEST_ARR1 = {1, 2, 2};
    std::vector<int> TEST_ARR2 = {1, 2, 2, 6, 99, 99, 7};
    std::vector<int> TEST_ARR3 = {1, 1, 6, 7, 2};
    std::vector<int> TEST_ARR4 = {6, 7, 2};
    std::vector<int> TEST_ARR5 = {1, 6, 7, 6, 7};
    std::vector<int> TEST_ARR6 = {1, 6, 7, 2, 6, 99, 7};
    std::vector<int> TEST_ARR7 = {1, 6, 99, 7, 7};
    std::vector<int> TEST_ARR8 = {6, 7, 7};

    EXPECT_EQ(5, sum67(TEST_ARR1));
    EXPECT_EQ(5, sum67(TEST_ARR2));
    EXPECT_EQ(4, sum67(TEST_ARR3));
    EXPECT_EQ(2, sum67(TEST_ARR4));
    EXPECT_EQ(1, sum67(TEST_ARR5));
    EXPECT_EQ(3, sum67(TEST_ARR6));
    EXPECT_EQ(8, sum67(TEST_ARR7));
    EXPECT_EQ(7, sum67(TEST_ARR8));
}