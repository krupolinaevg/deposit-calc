#include "../thirdparty/ctest.h"


CTEST(suite, TEST_SROK)
{
    const int srok = 320;
   
    ASSERT_INTERVAL(1,365,srok);
}


CTEST(suite, TEST_VKLAD)
{
    const int vklad = 11000;
    ASSERT_INTERVAL(10000, 999999, vklad);
}