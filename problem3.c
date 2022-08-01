3. The prime factors of 13195 are 5, 7, 13 and 29. What is the largest prime factor of the
number 600851475143? Ans: 6857
  
 #include<stdio.h>
int main(void)
{
    unsigned long long n=600851475143;
    unsigned long long i;
    for (i=2ull;i<n;i++)
    {
        while(n%i==0)
        {
            n/=i;
        }
    }
    printf("%d\n",n);
    return 0;
}
