#include<stdio.h>
#include<math.h>
double fact(double n){
    int j,f=1;
    for(j=1;j<=n;j++)
    f=f*j;
    return f;
}
void main(){
double n,i;
double x,num;
printf("enter no of elements");
scanf("%lf",&n);
printf("enter value of x");
scanf("%lf",&x);
double sum=1,y;
for(i=1;i<=n;i++){
    num=pow(x,i);
    y=num/fact(i);
    sum+=y;
}
printf("sum of given series is%lf ",sum);
}
