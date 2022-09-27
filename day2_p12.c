#include<stdio.h>
void main(){
int i,j,n,m;
printf("enter no of rows:\n");
scanf("%d",&n);
m=n;
for(i=n;i>=1;i--)
{
    for(j=1;j<=i;j++)
    {
        printf("%d",j);
    }
    if(i!=6)
    {
    for(j=2*m-1;j>0;j--)
    {
        printf(" ");
    }m=m-1;
    }
    for(j=i;j>=1;j--)
    {
        printf("%d",j);
    }

    printf("\n");
}
}