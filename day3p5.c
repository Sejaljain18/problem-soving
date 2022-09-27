#include<stdio.h>  
#include<math.h>  
double fact(double n){
    double i,fact=1;
    for(i=1;i<=n;i++)
    fact=fact*i;
    return fact;
}
void main()
{
    double n,i,sum=0,num,x;
    int c=1;
    printf("enter no of terms\n");
    scanf("%lf",&n);
    printf("enter value of x\n");
    scanf("%lf",&x);
    for(i=1;i<=n;i+=2)
    {
    num=pow(x,i)/fact(i);
    if((c%2)!=0)
    sum=sum+num;
    else
    sum=sum-num;
    c++;
    }
    printf("%.2f\n",sum);
}