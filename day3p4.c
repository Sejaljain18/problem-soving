#include<stdio.h>
#include<math.h>
double fact(int n){
    double i,fact=1;
    for(i=1;i<=n;i++)
    fact=fact*i;
    return fact;
}
void main(){
int n,i,c=0;
double x;
printf("enter no of elements");
scanf("%lf",&n);
printf("enter value of x");
scanf("%lf",&x);
double sum=1;
for(i=1;i<=n;i++)
{c++;
    sum+=(pow(-1,c)*((pow(x,i))/(fact(i))));
}
printf("sum of given series is%lf ",sum);
}
