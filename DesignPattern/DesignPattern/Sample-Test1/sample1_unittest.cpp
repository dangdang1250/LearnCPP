#include <limits.h>
#include "pch.h"
#include "Enumeration.h"

namespace {
	TEST(SquareRootTest, PositiveNos) {
		// test case
		Enumeration e1 = Enumeration();
		EXPECT_EQ(18.0, e1.square_root(324.0));
		EXPECT_EQ(25.4, e1.square_root(645.16));
		EXPECT_EQ(50.3321, e1.square_root(2533.310224));
	}

	TEST(SquareRootTest, ZeroAndNegativeNos) {
		// test case
		Enumeration e1 = Enumeration();
		ASSERT_EQ(0.0, e1.square_root(0.0));
		ASSERT_EQ(-1, e1.square_root(-22.0));
	}
}