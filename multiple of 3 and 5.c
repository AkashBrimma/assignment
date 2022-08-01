/*If we list all the natural numbers below 10 that are multiples of 3 or 5, we get 3, 5, 6 and 9.
The sum of these multiples is 23. Find the sum of all the multiples of 3 or 5 below 1000. Ans:
233168*/

  #include <stdio.h>
int main()
{
int S=0,i;
for (i=0;i<1000;i++)if(i%3==0 || i%5==0)S=S+i;
printf("%d",S);
return 0;
}
