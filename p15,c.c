#include<stdio.h>
void main()
{
  int a[20][20];

   int findtotalpaths= pathfunc(20,20);

    printf("%d",findtotalpaths);
}
int pathfunc(int i,int j)
{
   int totalpaths;
 if(i==0||j==0)
  return 1;
    totalpaths=pathfunc(i,i-1)+pathfunc(i-1,1);
    return totalpaths;
}

