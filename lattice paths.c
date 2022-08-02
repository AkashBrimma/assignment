/*15. Starting in the top left corner of a 2×2 grid, and only being able to move to the right
and down, there are exactly 6 routes to the bottom right corner.

How many such routes are there through a 20×20 grid?*/
#include<stdio.h>
int main()
{
    unsigned long long grid[21][21];
    int i,j;
    for (i=0;i<21;i++)
    {
        for (j=0;j<21;j++)
        {
            grid[i][j] =1;
        }
    }
    for(i=1;i<21;i++)
    {
        for(j=1;j<21;j++)
        {
            grid[i][j] = grid[i-1][j] + grid[i][j-1];
        }
    }
    printf("%lld\n",grid[20][20]);
    return 0;
}
