#include <gtest/gtest.h>
#include <iostream>
#include <iomanip>

int main(int argc, char **argv)
{
    ::testing::InitGoogleTest(&argc, argv);

    int result = RUN_ALL_TESTS();

    const static ::testing::UnitTest* unit = ::testing::UnitTest::GetInstance();
    
    int total = unit->total_test_count();
    int passed = unit->successful_test_count();
    int failed = unit->failed_test_count();
    double percent = total > 0 ? (passed / total) * 100.0 : 0.0;

    std::cout << "\n========================================\n";
    std::cout << "    Total     :   " << total << "\n";
    std::cout << "    Passed    :   " << passed << "\n";
    std::cout << "    Failed    :   " << failed << "\n";
    std::cout << "    Score     :   " << std::fixed << std::setprecision(2) << percent << "%" << "\n";
    std::cout << "========================================\n";

    return result;
}
