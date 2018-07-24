#include<stdio.h>
int main()
{
int num,min,max;
printf("\n Enter an integar");
scanf("%d",&num);
printf("\n Enter the minimum and maximum range");
scanf("%d%d",&min,&max);
if((num-min)*(num-max)<=0)
{
printf("%d is an range of[%d,%d]",num,min,max);
}
else
{
printf("%d is not an range of[%d,%d]",num,min,max);
}
return 0;
}
