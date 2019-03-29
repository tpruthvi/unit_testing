#include "test_cases.h"
void test_addition(void)
{
    assert(addition(0,2) == 2);
    printf("addition of two positive numbers done!\n");
    assert(addition(-2,-3) == -5);
    printf("addition of two negative numbers done!\n");
    assert(addition(-2,5) == 3);
    printf("addition of positive and negative numbers is done!\n");
}
void test_subtraction(void)
{
    assert(subtraction(0,2) == -2);
    printf("subtraction of two positive numbers done!\n");
    assert(subtraction(-2,-3) == 1);
    printf("subtraction of two negative numbers done!\n");
    assert(subtraction(-2,5) == -7);
    printf("subtraction of positive and negative numbers is done!\n");
}
void test_multiplication()
{
    assert(multiplication(2,5) == 10);
    printf("multiplication of two positive numbers is done!\n");
    assert(multiplication(-2,-6) == 12);
    printf("multiplication of two negative numbers is done!\n");
    assert(multiplication(-2,5) == -10);
    printf("multiplication of positive and negative numbers is done!\n");
}
void test_division()
{
    assert(division(6,2) == 3);
    printf("division of two positive numbers is done!\n");
    assert(division(-6,-2) ==3);
    printf("division of two negative numbers is done!\n");
    assert(division(6,-2) == -3);
    printf("division of positive and negative numbers is done!\n");
}
void test_power()
{
    assert(power(6,2) == 36);
    printf("power of two positive numbers is done!\n");
    assert(power(-6,-2) >= 0);
    printf("power of two negative numbers is done!\n");
    assert(power(-6,2) == 36);
    printf("power of positive and negative numbers is done!\n");
}



