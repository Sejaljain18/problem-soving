#include<stdio.h>
void main()
{
    int i,j,k,n;
    printf("enter no of rows");
    scanf("%d",&n);
    for(i=n;i>=1;i--)
    {
        for(j=i;j<=n;j++)
        printf("%c",(char)(64+j));
        printf("\n");
    }
}