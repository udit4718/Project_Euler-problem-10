#include<stdio.h>
long long pathCount(int i,int j)
{
    long long totalpaths;
    if(i==0||j==0) { return 1; }
    if(i == 1 && j == 1) { return 2;}

    return pathCount(i,j-1)+pathCount(i-1,j);
}

void main()
{
    printf("%lld",pathCount(20, 20));
}






