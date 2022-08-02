/*9.A Pythagorean triplet is a set of three natural numbers, a < b < c, for which,

a2 + b2 = c2
For example, 32 + 42 = 9 + 16 = 25 = 52.
There exists exactly one Pythagorean triplet for which a + b + c = 1000.
Find the product abc.
Ans: 31875000*/
#include <stdio.h>
int main(void)
{
 int a, b;
 for (a = 1; a <= 333; a++) {
 for (b = a; b <= 666; b++) {
 int c = (1000 - a - b);
 if (a*a + b*b == c*c) {
 printf("%d\n", a * b * c);
 }
 }
 }
 return 0;
}
