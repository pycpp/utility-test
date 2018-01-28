//  :copyright: (c) 2017-2018 Alex Huszagh.
//  :license: MIT, see LICENSE.md for more details.
/*
 *  \addtogroup Tests
 *  \brief Elemental utilities unittests.
 */

#include "elemental_test.h"
#include <gtest/gtest.h>

PYCPP_USING_NAMESPACE

// TESTS
// -----

TEST(elemental, less_than_comparable)
{
    lt1 x1(5);
    lt1 x2(6);
    lt2 x3(7);
    // 1 order
    EXPECT_TRUE(x1 < x2);
    EXPECT_TRUE(x1 <= x2);
    EXPECT_TRUE(x2 > x1);
    EXPECT_TRUE(x2 >= x1);

    // 2 order
    EXPECT_TRUE(x1 < x3);
    EXPECT_TRUE(x1 <= x3);
    EXPECT_TRUE(!(x1 > x3));
    EXPECT_TRUE(!(x1 >= x3));
    EXPECT_TRUE(!(x3 < x1));
    EXPECT_TRUE(!(x3 <= x1));
    EXPECT_TRUE(x3 > x1);
    EXPECT_TRUE(x3 >= x1);
}


TEST(elemental, equality_comparable)
{
    eq1 e1(3);
    eq1 e2(4);
    eq2 e3(3);

    EXPECT_TRUE(e1 == e3);
    EXPECT_TRUE(e3 == e1);
    EXPECT_TRUE(e2 != e3);
    EXPECT_TRUE(e3 != e2);
}


TEST(elemental, multipliable)
{
    mul1 x1(5);
    mul1 x2(6);
    mul2 x3(7);

    // check ops
    EXPECT_EQ((x1 * x2).a, 30);
    EXPECT_EQ((x1 * x3).a, 35);
    EXPECT_EQ((x3 * x1).a, 35);
}


TEST(elemental, addable)
{
    add1 a1(5);
    add1 a2(6);
    add2 a3(7);

    // check ops
    EXPECT_EQ((a1 + a2).a, 11);
    EXPECT_EQ((a1 + a3).a, 12);
    EXPECT_EQ((a3 + a1).a, 12);
}


TEST(elemental, subtractable)
{
    sub1 s1(5);
    sub1 s2(6);
    sub2 s3(7);

    // check ops
    EXPECT_EQ((s1 - s2).a, -1);
    EXPECT_EQ((s3 - s1).a, 2);
}

// TODO: it works, add tests later...


