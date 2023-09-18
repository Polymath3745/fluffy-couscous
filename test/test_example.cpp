#include <gtest/gtest.h>
#include "Account.hpp"
TEST(MyTestSuite, MyTestCase) {
    // Your test assertions go here
    EXPECT_EQ(hello(), "Hello");
    std::cout << "Test worked" << std::endl;
}