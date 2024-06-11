#include <gtest/gtest.h>
#include "your_header_file.h" // Замените на имя вашего заголовочного файла, где объявлена функция isDivisibleBy5

TEST(DivisibilityTest, DivisibleBy5) {
    EXPECT_TRUE(isDivisibleBy5(0));      
    EXPECT_TRUE(isDivisibleBy5(5));
    EXPECT_TRUE(isDivisibleBy5(10));
    EXPECT_TRUE(isDivisibleBy5(15));
}

TEST(DivisibilityTest, NotDivisibleBy5) {
    EXPECT_FALSE(isDivisibleBy5(3));
    EXPECT_FALSE(isDivisibleBy5(7));
    EXPECT_FALSE(isDivisibleBy5(11));
}

int main(int argc, char** argv) {
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
