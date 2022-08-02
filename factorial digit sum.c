/*20. n! means n × (n − 1) × ... × 3 × 2 × 1
For example, 10! = 10 × 9 × ... × 3 × 2 × 1 = 3628800,
and the sum of the digits in the number 10! is
3 + 6 + 2 + 8 + 8 + 0 + 0 = 27.
Find the sum of the digits in the number 100!
Ans: 648*/
#include<stdio.h>
#include<stdlib.h>
#include<stdint.h>
#include"big_int.h"

int main(int argc,const char* argv[])
{
    BigInt N(1);
    int32_t i;
    uint32_t sum = 0;
    
    for (i=2; i<=100; ++i) {
        N.Multiply(i);
    }
    while (!N.Zero()) {
        sum += N.DivMod(10);
    }
    printf("sum = %u\n", sum);
    return 0;
}
