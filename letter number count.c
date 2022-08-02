/*17. If the numbers 1 to 5 are written out in words: one, two, three, four, five, then there
are 3 + 3 + 5 + 4 + 4 = 19 letters used in total.
If all the numbers from 1 to 1000 (one thousand) inclusive were written out in words,
how many letters would be used?
NOTE: Do not count spaces or hyphens. For example, 342 (three hundred and
forty-two) contains 23 letters and 115 (one hundred and fifteen) contains 20 letters.
The use of "and" when writing out numbers is in compliance with British usage.*/
#include <stdio.h>

int main(void)
{
  unsigned s1[] = { 0, 3, 3, 5, 4, 4, 3, 5, 5, 4 };
 
  unsigned s2[] = { 3, 6, 6, 8, 8, 7, 7, 9, 8, 8 };

  unsigned s3[] = { 0, 0, 6, 6, 5, 5, 5, 7, 6, 6 };

  unsigned hundred = 7;
  unsigned and = 3;
  unsigned thousand = 8;

  unsigned i;
  unsigned sum = 0;

  for (i = 1; i < 10; i++) {
    sum += s1[i];
  }
  for (i = 0; i < 10; i++) {
    sum += s2[i];
  }
  for (i = 20; i < 100; i++) {
    sum += s3[i/10] + s1[i%10];
  }
  for (i = 1; i < 10; i++) {
    int j;
    sum += s1[i] + hundred;
   
    for (j = 1; j < 10; j++) {
      sum += s1[i] + hundred + and + s1[j];
    }

    for (j = 0; j < 10; j++) {
      sum += s1[i] + hundred + and + s2[j];
    }
  
    for (j = 20; j < 100; j++) {
      sum += s1[i] + hundred + and + s3[j/10] + s1[j%10];
    }
  }

  sum += s1[1] + thousand;

  printf("%u\n", sum);

  return 0;
}
