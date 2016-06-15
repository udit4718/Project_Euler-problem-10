#include<stdio.h>
void main()
{
    int c[1001];
    c[0]=0;
    c[1]=3;
    c[2]=3;
    c[3]=5;
    c[4]=4;
    c[5]=4;
    c[6]=3;
    c[7]=5;
    c[8]=5;
    c[9]=4;
    c[10]=3;
    c[11]=6;
    c[12]=6;
    c[13]=8;
    c[14]=8;
    c[15]=7;
    c[16]=7;
    c[17]=9;
    c[18]=8;
    c[19]=8;
    c[20]=6;
    c[30]=6;
    c[40]=5;
    c[50]=5;
    c[60]=5;
    c[70]=7;
    c[80]=6;
    c[90]=6;
    c[100]=7;
    c[1000]=11;
    int x;
    long long count=0;
    for(x=1; x<1000; x++)
    {
        if(x<100)
        {
            if(x>10&&x<20)
                count+=c[x];
            else
                count+=c[x-(x%10)]+c[x%10];
        }

        else if(x%100==0)
        {
            count+=c[x/100]+7;
        }

        else
        {
            if(x%100>10&&x%100<20)
                count+=c[x/100]+10+c[x%100];
            else
                count+=c[x/100]+10+c[x%100-x%10]+c[x%10];
        }

    }

    printf("%lld",count+c[1000]);
}


















