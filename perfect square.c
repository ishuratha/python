#include<stdio.h>
#include<conio.h>
int main()
{
int x,y,z,i;
scanf("%d",&x);
scanf("%d",&y);
z=x*y;
for(i=2;i<z;i++)
{
if(z==i*i)
{
printf("Yes");
break;
}
}
}
