#include<stdio.h>
void main(){
int i,s,n,k;
printf("enter no of rows");
scanf("%d",&n);
for(i=n;i>=1;i--)
{
    for(s=i;s<n;s++)
    printf(" ");

for(k=1;k<=(2*i-1);k++)
{
    printf("*");
    
}
printf("\n");
}
for(i=2;i<=n;i++)
{
    for(s=i;s<n;s++)
    printf(" ");

for(k=1;k<=(2*i-1);k++)
{
    printf("*");
    
}
printf("\n");
}
}