/*Where n is a positive integer, the function f(n) satisfies the following.
f(0)=0
f(1)=1
f(n)=f(n-1)+ f(n-2)

Please create a program to find f(n). (You can write in any language that you are good at.)*/

#include<stdio.h>
#include<stdlib.h>
long f(long n)
{
   //If we use recursion to do this program the time will be to long
   //,so we use normal Formula to count f(n)
   unsigned long  a=0,b=1;
    unsigned long  temp;
    int i;
   if(n==0 ||n==1) return n;
   for (i=2;i<=n;i++)
   {
   	temp=b;
   	b=a+b;
   	a=temp;
   }
   return b;
}
int main()
{
  unsigned long n; //If we use 'long' data type the Data Type Range can not show 8181 result
  		//,so we use unsigned long  
  printf("Please input n to get f(n)\n");
  scanf("%ld", &n);
  printf("%I64u", f(n));
}

