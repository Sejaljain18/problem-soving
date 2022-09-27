#include<stdio.h>
void main(){
int n,i,j,k;
printf("enter the no of rows:\n");
scanf("%d",&n);
for( i=1;i<=n;i++)
{
    for(j=1;j<=n-i;j++)
    {
        printf(" ");
    }
    for(k=i;k>0;k--)
    {
        printf("%d",k);
    }
    for(j=2;j<=i;j++)
    {
        printf("%d",j);
    }
    printf("\n");
}

}