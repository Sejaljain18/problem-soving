#include<stdio.h>
#include<math.h>
int power(int a,int b){
    if(b>0)
    return(a*power(a,b-1));
    else
    return 1;
}
void main(){
int a,b;
double result;
printf("Enter base digit:\n");
scanf("%d",&a);
printf("Enter power:\n");
scanf("%d",&b);
result=power(a,b);
printf("%d raised to the power %d is:%lf",a,b,result);
}