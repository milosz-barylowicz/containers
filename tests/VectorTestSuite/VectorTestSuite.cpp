/*
 * Author: Milosz Barylowicz
 * Date:   2023
 */

#include <gtest/gtest.h>
#include "Vector.hpp"

namespace
{
constexpr int DEFAULT_VALUE = 100;
} // namespace anonymous

namespace containers::ut
{
using namespace ::testing;


class VectorTestSuite : public Test
{
public:
	Vector<int> sut;
};

TEST_F(VectorTestSuite, ShouldAddNewElement)
{
	// TODO: when init list will be implemented replace that code
	sut.push_back(DEFAULT_VALUE);
	sut.push_back(DEFAULT_VALUE + 1);
	ASSERT_EQ(DEFAULT_VALUE + 1, sut[1]);
}

} // namespace containers::ut
