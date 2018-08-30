#include,stdio.h>
#include<stdbool.h>
bool ispowerOfTwo(int n)
{
if(n==0)
return 0;
while(n!=1)
{
if(n%2!=0)
return 0;
n=n/2;
}
return 1;
}
int main()
{
is PowerOfTwo(31)?print("yes\n"):print("no\n");
is powerOfTwo(64)?print("yes\n"):print("no\n");
return 0;
}



