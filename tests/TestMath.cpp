#include <gtest/gtest.h>
#include <stdexcept>
#include "Environment.h"
#include "fibonachi.h"

using namespace math;

struct TestMath : public ::testing::Test
{
    void SetUp()
    {
    }

    void TearDown()
    {
    }
};

TEST_F(TestMath, fibonachi)
{
	EXPECT_THROW({
		const auto fminus = fibonachi(-1);
	}, std::runtime_error);

	const auto f0 = fibonachi(0);
	EXPECT_TRUE(f0.empty());

	const auto f1 = fibonachi(1);
	EXPECT_EQ(f1.size(), 1);
	EXPECT_EQ(f1[0], 0);

	const auto f2 = fibonachi(2);
	EXPECT_EQ(f2.size(), 2);
	EXPECT_EQ(f2[0], 0);
	EXPECT_EQ(f2[1], 1);

	const auto f3 = fibonachi(3);
	EXPECT_EQ(f3.size(), 3);
	EXPECT_EQ(f3[0], 0);
	EXPECT_EQ(f3[1], 1);
	EXPECT_EQ(f3[2], 1);

	const auto f4 = fibonachi(4);
	EXPECT_EQ(f4.size(), 4);
	EXPECT_EQ(f4[0], 0);
	EXPECT_EQ(f4[1], 1);
	EXPECT_EQ(f4[2], 1);
	EXPECT_EQ(f4[3], 2);

	const auto f5 = fibonachi(5);
	EXPECT_EQ(f5.size(), 5);
	EXPECT_EQ(f5[0], 0);
	EXPECT_EQ(f5[1], 1);
	EXPECT_EQ(f5[2], 1);
	EXPECT_EQ(f5[3], 2);
	EXPECT_EQ(f5[4], 3);

}
