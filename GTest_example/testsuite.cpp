#include <gtest/gtest.h>
#include <iostream>

// References and Documentation:
// https://google.github.io/googletest/primer.html
// https://google.github.io/googletest/reference/assertions.html

extern "C"
{
#include "hello_world.h"
}

class HelloFixture : public ::testing::TestWithParam<const char *>
{
protected:
    // We could use variables or structs for our tests
    // struct *my_struct_type my_struct;
    void SetUp() override // run before each test
    {
        // setup our struct
    }
    void TearDown() override // run after each test
    {
        // cleanup our struct
    }
};

// We pass a HelloFixture object that has been Setup as argument
TEST_F(HelloFixture, basic)
{
    // We could use "my_struct" directly here
    ASSERT_TRUE(1 == 1);
}

TEST_F(HelloFixture, medium)
{
    // From
    // https://stackoverflow.com/questions/5419356/redirect-stdout-stderr-to-a-string
    // We capture the output of our call to the function we want to test
    std::stringstream buffer;
    hello_world();
    std::string text = buffer.str();
    ASSERT_STREQ("Hello World!\n", text.c_str());
}

auto main(int argc, char **argv) -> int
{
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}