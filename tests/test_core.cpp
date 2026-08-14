#include <gtest/gtest.h>
#include "core.hpp"

// tea_party tests
TEST(TeaParty, CodingBat) {
    EXPECT_EQ(tea_party(6, 8), 1);
    EXPECT_EQ(tea_party(3, 8), 0);
    EXPECT_EQ(tea_party(8, 3), 0);
    EXPECT_EQ(tea_party(20, 6), 2);
    EXPECT_EQ(tea_party(6, 20), 2);
}

// fizz_string tests
TEST(FizzString, CodingBat) {
    EXPECT_EQ(fizz_string("fig"), "Fizz");
    EXPECT_EQ(fizz_string("dib"), "Buzz");
    EXPECT_EQ(fizz_string("fib"), "FizzBuzz");
    EXPECT_EQ(fizz_string("hello"), "hello");
}

// fizz_string2 tests
TEST(FizzString2, CodingBat) {
    EXPECT_EQ(fizz_string2(1), "1!");
    EXPECT_EQ(fizz_string2(2), "2!");
    EXPECT_EQ(fizz_string2(3), "Fizz!");
    EXPECT_EQ(fizz_string2(9), "Fizz!");
    EXPECT_EQ(fizz_string2(5), "Buzz!");
    EXPECT_EQ(fizz_string2(10), "Buzz!");
    EXPECT_EQ(fizz_string2(15), "FizzBuzz!");
}

// two_as_one tests
TEST(TwoAsOne, CodingBat) {
    EXPECT_TRUE(two_as_one(1, 2, 3));
    EXPECT_TRUE(two_as_one(3, 1, 2));
    EXPECT_TRUE(two_as_one(3, 2, 1));
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

TEST(Has22, CodingBat) {
    const std::vector<int> TEST_ARR1 = {1, 2, 2};
    const std::vector<int> TEST_ARR2 = {1, 2, 1, 2, 7};
    const std::vector<int> TEST_ARR3 = {1, 1, 2};

    EXPECT_TRUE(has22(TEST_ARR1));
    EXPECT_FALSE(has22(TEST_ARR2));
    EXPECT_FALSE(has22(TEST_ARR3));
}

TEST(Lucky13, CodingBat) {
    const std::vector<int> TEST_ARR1 = {0, 2, 4};
    const std::vector<int> TEST_ARR2 = {1, 2, 3};
    const std::vector<int> TEST_ARR3 = {1, 2, 4};

    EXPECT_TRUE(lucky13(TEST_ARR1));
    EXPECT_FALSE(lucky13(TEST_ARR2));
    EXPECT_FALSE(lucky13(TEST_ARR3));
}

TEST(Sum28, CodingBat) {
    const std::vector<int> TEST_ARR1 = {2, 3, 2, 2, 4, 2};
    const std::vector<int> TEST_ARR2 = {2, 3, 2, 2, 4, 2, 2};
    const std::vector<int> TEST_ARR3 = {1, 2, 3, 4};

    EXPECT_TRUE(sum28(TEST_ARR1));
    EXPECT_FALSE(sum28(TEST_ARR2));
    EXPECT_FALSE(sum28(TEST_ARR3));
}

TEST(More14, CodingBat) {
    const std::vector<int> TEST_ARR1 = {1, 4, 1};
    const std::vector<int> TEST_ARR2 = {1, 4, 1, 4};
    const std::vector<int> TEST_ARR3 = {1, 1};

    EXPECT_TRUE(more14(TEST_ARR1));
    EXPECT_FALSE(more14(TEST_ARR2));
    EXPECT_TRUE(more14(TEST_ARR3));
}

TEST(FizzArray, CodingBat) {
    const std::vector<int> TEST1 = fizz_array(4);
    const std::vector<int> TEST2 = fizz_array(1);
    const std::vector<int> TEST3 = fizz_array(10);

    const std::vector<int> TEST_ARR1 = {0, 1, 2, 3, 4};
    const std::vector<int> TEST_ARR2 = {0};
    const std::vector<int> TEST_ARR3 = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};

    // TEST1
    for (int i = 0; i < 4; i++)
        EXPECT_EQ(TEST_ARR1.at(i), TEST1.at(i));

    // TEST2
    EXPECT_EQ(TEST_ARR2.at(0), TEST2.at(0));

    // TEST3
    for (int i = 0; i < 10; i++)
        EXPECT_EQ(TEST_ARR3.at(i), TEST3.at(i));
}

TEST(Only14, CodingBat) {
    const std::vector<int> TEST_ARR1 = {1, 4, 1, 4};
    const std::vector<int> TEST_ARR2 = {1, 4, 2, 4};
    const std::vector<int> TEST_ARR3 = {1, 1};

    EXPECT_TRUE(only14(TEST_ARR1));
    EXPECT_FALSE(only14(TEST_ARR2));
    EXPECT_TRUE(only14(TEST_ARR3));
}

TEST(FizzArray2, CodingBat) {
    const std::vector<std::string> TEST1 = fizz_array2(4);
    const std::vector<std::string> TEST2 = fizz_array2(1);
    const std::vector<std::string> TEST3 = fizz_array2(10);

    const std::vector<std::string> TEST_ARR1 = {"0", "1", "2", "3", "4"};
    const std::vector<std::string> TEST_ARR2 = {"0"};
    const std::vector<std::string> TEST_ARR3 = {"0", "1", "2", "3", "4", "5", "6", "7", "8", "9"};

    // TEST1
    for (int i = 0; i < 4; i++)
        EXPECT_EQ(TEST_ARR1.at(i), TEST1.at(i));

    // TEST2
    EXPECT_EQ(TEST_ARR2.at(0), TEST2.at(0));

    // TEST3
    for (int i = 0; i < 10; i++)
        EXPECT_EQ(TEST_ARR3.at(i), TEST3.at(i));
}

TEST(No14, CodingBat) {
    const std::vector<int> TEST_ARR1 = {1, 2, 3};
    const std::vector<int> TEST_ARR2 = {1, 2, 3, 4};
    const std::vector<int> TEST_ARR3 = {2, 3, 4};

    EXPECT_TRUE(no14(TEST_ARR1));
    EXPECT_FALSE(no14(TEST_ARR2));
    EXPECT_TRUE(no14(TEST_ARR3));
}

TEST(IsEverywhere, CodingBat) {
    const std::vector<int> TEST_ARR1 = {1, 2, 1, 3};
    const std::vector<int> TEST_ARR2 = {1, 2, 1, 3};
    const std::vector<int> TEST_ARR3 = {1, 2, 1, 3, 4};

    EXPECT_TRUE(is_everywhere(TEST_ARR1, 1));
    EXPECT_FALSE(is_everywhere(TEST_ARR2, 2));
    EXPECT_FALSE(is_everywhere(TEST_ARR3, 1));
}

TEST(Either24, CodingBat) {
    const std::vector<int> TEST_ARR1 = {1, 2, 2};
    const std::vector<int> TEST_ARR2 = {4, 4, 1};
    const std::vector<int> TEST_ARR3 = {4, 4, 1, 2, 2};

    EXPECT_TRUE(either24(TEST_ARR1));
    EXPECT_TRUE(either24(TEST_ARR2));
    EXPECT_FALSE(either24(TEST_ARR3));
}

TEST(MatchUp, CodingBat) {
    const std::vector<int> TEST_ARR11 = {1, 2, 3};
    const std::vector<int> TEST_ARR12 = {2, 3, 10};

    const std::vector<int> TEST_ARR21 = {1, 2, 3};
    const std::vector<int> TEST_ARR22 = {2, 3, 5};

    const std::vector<int> TEST_ARR31 = {1, 2, 3};
    const std::vector<int> TEST_ARR32 = {2, 3, 3};

    EXPECT_EQ(match_up(TEST_ARR11, TEST_ARR12), 2);
    EXPECT_EQ(match_up(TEST_ARR21, TEST_ARR22), 3);
    EXPECT_EQ(match_up(TEST_ARR31, TEST_ARR32), 2);
}

TEST(Has77, CodingBat) {
    const std::vector<int> TEST_ARR1 = {1, 7, 7};
    const std::vector<int> TEST_ARR2 = {1, 7, 1, 7};
    const std::vector<int> TEST_ARR3 = {1, 7, 1, 1, 7};

    EXPECT_TRUE(has77(TEST_ARR1));
    EXPECT_TRUE(has77(TEST_ARR2));
    EXPECT_FALSE(has77(TEST_ARR3));
}

TEST(Has12, CodingBat) {
    const std::vector<int> TEST_ARR1 = {1, 3, 2};
    const std::vector<int> TEST_ARR2 = {1, 2, 3};
    const std::vector<int> TEST_ARR3 = {1, 3, 2, 1, 7};
    const std::vector<int> TEST_ARR4 = {1};

    EXPECT_TRUE(has12(TEST_ARR1));
    EXPECT_TRUE(has12(TEST_ARR2));
    EXPECT_TRUE(has12(TEST_ARR3));
    EXPECT_FALSE(has12(TEST_ARR4));
}

TEST(ModThree, CodingBat) {
    const std::vector<int> TEST_ARR1 = {2, 1, 3, 5};
    const std::vector<int> TEST_ARR2 = {2, 1, 2, 5};
    const std::vector<int> TEST_ARR3 = {2, 4, 2, 5};

    EXPECT_TRUE(mod_three(TEST_ARR1));
    EXPECT_FALSE(mod_three(TEST_ARR2));
    EXPECT_TRUE(mod_three(TEST_ARR3));
}

TEST(HaveThree, CodingBat) {
    const std::vector<int> TEST_ARR1 = {3, 1, 3, 1, 3};
    const std::vector<int> TEST_ARR2 = {3, 1, 3, 3};
    const std::vector<int> TEST_ARR3 = {3, 4, 3, 3, 4};

    EXPECT_TRUE(have_three(TEST_ARR1));
    EXPECT_FALSE(have_three(TEST_ARR2));
    EXPECT_FALSE(have_three(TEST_ARR3));
}

TEST(TwoTwo, CodingBat) {
    const std::vector<int> TEST_ARR1 = {4, 2, 2, 3};
    const std::vector<int> TEST_ARR2 = {2, 2, 4};
    const std::vector<int> TEST_ARR3 = {2, 2, 4, 2};

    EXPECT_TRUE(two_two(TEST_ARR1));
    EXPECT_TRUE(two_two(TEST_ARR2));
    EXPECT_FALSE(two_two(TEST_ARR3));
}

TEST(SameEnds, CodingBat) {
    const std::vector<int> TEST_ARR = {4, 2, 2, 3, 5, 4, 2};

    EXPECT_FALSE(same_ends(TEST_ARR, 1));
    EXPECT_TRUE(same_ends(TEST_ARR, 2));
    EXPECT_FALSE(same_ends(TEST_ARR, 3));
}
