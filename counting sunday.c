/*19. You are given the following information, but you may prefer to do some research for
yourself
● 1 Jan 1900 was a Monday.
● Thirty days has September,
● April, June and November.
● All the rest have thirty-one,
● Saving February alone,
● Which has twenty-eight, rain or shine.
● And on leap years, twenty-nine.
● A leap year occurs on any year evenly divisible by 4, but not on a century
unless it is divisible by 400.
How many Sundays fell on the first of the month during the twentieth century (1 Jan
1901 to 31 Dec 2000)?*/
#include <stdio.h>

int main(void){
    int months[12] = { 31 , 28 , 31 , 30 , 31 , 30 , 31 , 31 , 30 , 31 , 30 , 31 };
    int year=1901;
    int dayoftheweek=2;  
    int sunday=0;
    int firstsundays=0;

    while(year<=2000){
        if(year%4==0)   
            months[1]=29;

        for (int i = 0; i < 12; ++i) {
            for (int d = 1; d <= months[i]; d++){
                if(dayoftheweek==7)  
                    dayoftheweek=0;

                if(dayoftheweek==sunday && d==1)
                    firstsundays++;

                dayoftheweek++;
            }
        }

        months[1]=28;
        year++;
    }

    printf("There are %d Sundays that fell on the first of the month\n", firstsundays);

    return 0;
}
