#include <unity.h>
#include <unity_fixture.h>

#include "add.h"

TEST_GROUP( Add );


TEST_SETUP( Add )
{}


TEST_TEAR_DOWN( Add )
{}


/**
 * 1 + 1 = 2 をテストします
 */
TEST( Add , return_2 )
{
    int result = add(1, 1);
    TEST_ASSERT_EQUAL( 2, result );
}
