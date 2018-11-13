/*
(1)	Imagine you are playing a board game. You roll a 6-faced dice and move forward the same number of spaces that you rolled. If the finishing point is “n” spaces away from the starting point, please implement a program that calculates how many possible ways are there to arrive exactly at the finishing point.
Calculates 6-faced dice board game result as below
f(1)=1
f(2)=f(1)=1
f(3)= f(2)+f(1)=2
f(4) = f(1) + f(2) + f(3) = 4
f(5) = f(1) + f(2) + f(3) + f(4) = 8
f(6) = f(1) + f(2) + f(3) + f(4) + f(5) = 16
According the result, we found that the solution will be 2n-2
So we implement a program as below


(2) If n=610, how many possible ways are there to arrive exactly at the finishing point?
The answer is 2147483648

*/

#include<stdio.h>
#include <math.h>
int f(int n)
{
   int result; 
   result=pow(2,n-2);
   return  result;
}
int main()
{
  int n; 
  printf("Please input n to get  how many possible ways are there to arrive exactly at the finishing point.\n");
  scanf("%d", &n);
  printf("%I64u", f(n));
}
