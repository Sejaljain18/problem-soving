#include<stdio.h>
int factorial(int n){
if (n==0)
return 1;
else
return(n* factorial(n-1));
}
void main()
{
int num;
int fact;
printf("Please enter a number for factorial :\n");
scanf("%d", &num);
fact = factorial(num);
printf("The factorial of the number %d is equal to : %ld\n",num,fact);
}