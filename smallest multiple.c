/*5.2520 is the smallest number that can be divided by each of the numbers from 1 to 10
without any remainder. What is the smallest positive number that is evenly divisible by all of
the numbers from 1 to 20? Ans: 232792560*/

#include<stdio.h>
static unsigned long gcd(unsigned long a, unsigned long b);
static __inline unsigned long lcm(unsigned long a, unsigned long b);

int main(void)
{
    unsigned long ans=1;
    unsigned long i;
    for (i=1;i<=20;i++){
        ans=lcm(ans,i);
    }
    printf("%lu\n",ans);
    return 0;
}
unsigned long gcd(unsigned long a, unsigned long b)
{
    unsigned long r;
    if(a>b){
        unsigned long t=a;
    a=b;
    b=t;
    }
    while(r=a%b){
        a=b;
        b=r;
    }
    return b;
}
unsigned long lcm(unsigned long a,unsigned long b)
{
    unsigned long long p=(unsigned long long)a*b;
    return p/gcd(a,b);
}                               
