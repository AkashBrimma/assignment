/*10. The sum of the primes below 10 is 2 + 3 + 5 + 7 = 17. Find the sum of all the primes below
two million. Ans: 142913828922*/

#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#define MAX 2000000
int main()
{
  int i,j;
  unsigned long int n=0;
  int prime;
  for(i=2;i<=MAX;i++){
    prime=1;
    for(j=2;j<(int)(sqrt(i)+1);j++){
      if(i%j==0){
        prime=0;
        break;
      }
    }
    if(prime==1){
      n=n+i;
    }
  }
  printf("%ld",n);
  return 0;
}  
