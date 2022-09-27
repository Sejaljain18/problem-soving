#include<stdio.h>
void main(){
int n;
printf("enter no of terms\n");
scanf("%d",&n);
int i,sum=0;
for(i=1;i<=n;i++){
    sum=sum+(i*(i+1)*(i+2));
}
printf("sum=%d\n",sum);
}