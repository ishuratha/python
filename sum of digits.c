#include<stdio.h>
int main()
{
int n,t,sum=0,remainder;
printf("\n Enter the integer");
scanf('5d",&n);
t=n;
while(t!=0)
{
remainder=t%10;
sum sum+remainder;
t=t/10;
}
printf("sum of digits of %d=%d\n",n,sum);
return 0;
}
