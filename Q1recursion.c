/*Where n is a positive integer, the function f(n) satisfies the following.
f(0)=0
f(1)=1
f(n)=f(n-1)+ f(n-2)

Please create a program to find f(n). (You can write in any language that you are good at.)*/
#include<stdio.h>
#include<stdlib.h>
int f(int n)
{
    if(n==0)
	{ 
		return 0;
	}
	else if (n==1)
	{
	return 1;
	}
	else return f(n-1)+f(n-2);

}

int main()
{
  unsigned long n; //If we use 'long' data type the Data Type Range can not show 8181 result
  		//,so we use unsigned long  
  printf("Please input n to get f(n)\n");
  scanf("%ld", &n);
  printf("%I64u", f(n));
}
