#include<stdio.h>
int fact(int n){
    int i,fact=1;
    for(i=1;i<=n;i++)
    fact=fact*i;
    return fact;
}
void main(){
int n,i;
printf("enter no of elements");
scanf("%d",&n);
int sum=0;
for(i=1;i<=n;i++){
sum=sum+fact(i);
}
printf("sum of given series is%d",sum);

}