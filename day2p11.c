#include<stdio.h>
void main(){
int i,j,n,m;
printf("enter no of rows:\n");
scanf("%d",&n);
m=n;
for(i=1;i<=n;i++)
{
    for(j=1;j<=i;j++)
    {
        printf("%d",j);
    }

    for(j=2*m-2;j>0;j--)
    {
        printf(" ");
    }m=m-1;
    for(j=i;j>=1;j--)
    {
        printf("%d",j);
    }

    printf("\n");
}
}