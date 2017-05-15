#include "../thirdparty/ctest.h"
#include "../src/deposit.h"
  
CTEST(suite, TEST_DEPOSIT){
    const int  result = 72000;
    int srok= 15;
    int vklad = 80000;
    int real_result = ss(&srok,&vklad);
    printf("Test for vklad less than 100000 and 0-30 day  ");
    ASSERT_EQUAL( result, real_result);
    }

CTEST(suite, TEST_DEPOSIT_2){
    const int  result = 81600;
    int srok= 50;
    int vklad = 80000;
    int real_result = ss(&srok,&vklad);
    printf("Test for vklad less than 100000 and 31-120 day ");
    ASSERT_EQUAL( result, real_result);
    }

CTEST(suite, TEST_DEPOSIT_3){
    const int  result = 84800;
    int srok= 200;
    int vklad = 80000;
    int real_result = ss(&srok,&vklad);
    printf("Test for vklad less than 100000 and 121-240 day ");
    ASSERT_EQUAL( result, real_result);
    }

CTEST(suite, TEST_DEPOSIT_4){
    const int  result = 89600;
    int srok= 300;
    int vklad = 80000;
    int real_result = ss(&srok,&vklad);
    printf("Test for vklad less than 100000 and 240-365 day");
    ASSERT_EQUAL( result, real_result);
    }
    
CTEST(suite, TEST_DEPOSIT_5){
    const int  result = 162000;
    int srok= 15;
    int vklad = 180000;
    int real_result = ss(&srok,&vklad);
    printf("Test for vklad more than 100000 and 0-30 day ");
    ASSERT_EQUAL( result, real_result);
}

CTEST(suite, TEST_DEPOSIT_6){
    const int  result = 185400;
    int srok= 50;
    int vklad = 180000;
    int real_result = ss(&srok,&vklad);
    printf("Test for vklad more than 100000 and 31-120 day ");
    ASSERT_EQUAL( result, real_result);
}

CTEST(suite, TEST_DEPOSIT_7){
    const int  result = 194400;
    int srok= 200;
    int vklad = 180000;
    int real_result = ss(&srok,&vklad);
    printf("Test for vklad more than 100000 and 120-240 day ");
    ASSERT_EQUAL( result, real_result);
}

CTEST(suite, TEST_DEPOSIT_8){
    const int  result = 206997;
    int srok= 300;
    int vklad = 180000;
    int real_result = ss(&srok,&vklad);
    printf("Test for vklad more than 100000 and 240-365 day ");
    ASSERT_EQUAL( result, real_result);
   }

    