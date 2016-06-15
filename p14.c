#include<stdio.h>

void main()
{
    unsigned long long i;
    unsigned long long maxchain=0;

    for (i=2; i<1000000; i++)
    {
        unsigned long long j=i;
        unsigned long long count=1;

        while(j!=1)
        {
            j = j%2 == 0 ? j / 2 : (3 * j + 1);
            count++;
          }


         //printf("\n%lld",count);
        if(maxchain<count)
        {
            maxchain=count;
        }
    }

    printf("\nthe max is %lld",i);
}
